%{
#define _GNU_SOURCE
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

extern int yylex();
extern int yyparse();
extern FILE* yyin;
void yyerror(const char* s);
%}

%union {
    int ival;
    char* sval;
}

%token <ival> NUMBER
%token <sval> IDENTIFIER SINGLE_COMMENT MULTI_COMMENT
%token INT RETURN IF ELSE WHILE FOR
%token PLUS MINUS TIMES DIVIDE
%token ASSIGN EQ NEQ LT GT LTE GTE
%token INCREMENT DECREMENT
%token PLUS_ASSIGN MINUS_ASSIGN TIMES_ASSIGN DIVIDE_ASSIGN
%token LPAREN RPAREN LBRACE RBRACE SEMICOLON COMMA

%type <sval> expression
%type <sval> statement
%type <sval> statements
%type <sval> function
%type <sval> program
%type <sval> declaration
%type <sval> compound_assign
%type <sval> comment

%left ASSIGN PLUS_ASSIGN MINUS_ASSIGN TIMES_ASSIGN DIVIDE_ASSIGN
%left EQ NEQ
%left LT GT LTE GTE
%left PLUS MINUS
%left TIMES DIVIDE
%right INCREMENT DECREMENT

%start program

%%

program:
    function
    {
        $$ = $1;
        printf("%s", $$);
        free($$);
    }
    ;

function:
    INT IDENTIFIER LPAREN RPAREN LBRACE statements RBRACE
    {
        asprintf(&$$, "let %s () =\n%s", $2, $6);
        free($2);
        free($6);
    }
    ;

statements:
    statement
    {
        $$ = $1;
    }
    | statements statement
    {
        asprintf(&$$, "%s%s", $1, $2);
        free($1);
        free($2);
    }
    ;

statement:
    declaration
    {
        $$ = $1;
    }
    | RETURN expression SEMICOLON
    {
        asprintf(&$$, ";;\n");
    }
    | IF LPAREN expression RPAREN LBRACE statements RBRACE
    {
        char* trimmed_statements = strdup($6);
        int len = strlen(trimmed_statements);
        if (len > 0 && trimmed_statements[len-1] == '\n') {
            trimmed_statements[len-1] = '\0';
        }
        asprintf(&$$, "  if %s then\n%s\n  else ()\n", $3, trimmed_statements);
        free($3);
        free($6);
        free(trimmed_statements);
    }
    | IF LPAREN expression RPAREN LBRACE statements RBRACE ELSE LBRACE statements RBRACE
    {
        char* trimmed_if = strdup($6);
        char* trimmed_else = strdup($10);
        int len_if = strlen(trimmed_if);
        int len_else = strlen(trimmed_else);
        
        // Eliminar el último punto y coma y el salto de línea de la parte 'then'
        while (len_if > 0 && (trimmed_if[len_if-1] == '\n' || trimmed_if[len_if-1] == ';')) {
            trimmed_if[--len_if] = '\0';
        }
        
        // Asegurarse de que haya un punto y coma al final de la parte 'else'
        if (len_else > 0 && trimmed_else[len_else-1] != ';') {
            trimmed_else = realloc(trimmed_else, len_else + 2);
            strcat(trimmed_else, ";");
        }
        
        asprintf(&$$, "  if %s then\n%s\n  else\n%s\n", $3, trimmed_if, trimmed_else);
        free($3);
        free($6);
        free($10);
        free(trimmed_if);
        free(trimmed_else);
    }
    | WHILE LPAREN expression RPAREN LBRACE statements RBRACE
    {
        asprintf(&$$, "  while %s do\n%s  done;\n", $3, $6);
        free($3);
        free($6);
    }
    | FOR LPAREN INT IDENTIFIER ASSIGN expression SEMICOLON expression SEMICOLON IDENTIFIER INCREMENT RPAREN LBRACE statements RBRACE
    {
        char* start_value = $6;
        char* end_value = $8;
        char* limit = strchr(end_value, ' ');
        if (limit) {
            *limit = '\0';
            limit++;
            char* clean_limit = limit;
            while (*clean_limit && (*clean_limit == '<' || *clean_limit == '=' || *clean_limit == ' ')) {
                clean_limit++;
            }
            asprintf(&$$, "  for %s = %s to %s do\n%s  done;\n", $4, start_value, clean_limit, $14);
        } else {
            asprintf(&$$, "  for %s = %s to 10 do\n%s  done;\n", $4, start_value, $14);
        }
        free($4);
        free($6);
        free($8);
        free($14);
    }
    | IDENTIFIER ASSIGN expression SEMICOLON
    {
        asprintf(&$$, "  %s := %s;\n", $1, $3);
        free($1);
        free($3);
    }
    | IDENTIFIER compound_assign expression SEMICOLON
    {
        asprintf(&$$, "  %s := !%s %s %s;\n", $1, $1, $2, $3);
        free($1);
        free($2);
        free($3);
    }
    | expression SEMICOLON
    {
        asprintf(&$$, "  %s;\n", $1);
        free($1);
    }
    | comment
    {
        $$ = $1;
    }
    ;

declaration:
    INT IDENTIFIER ASSIGN expression SEMICOLON
    {
        asprintf(&$$, "  let %s = ref %s in\n", $2, $4);
        free($2);
        free($4);
    }
    | INT IDENTIFIER SEMICOLON
    {
        asprintf(&$$, "  let %s = ref 0 in\n", $2);
        free($2);
    }
    ;

compound_assign:
    PLUS_ASSIGN     { $$ = strdup("+"); }
    | MINUS_ASSIGN  { $$ = strdup("-"); }
    | TIMES_ASSIGN  { $$ = strdup("*"); }
    | DIVIDE_ASSIGN { $$ = strdup("/"); }
    ;

expression:
    NUMBER
    {
        asprintf(&$$, "%d", $1);
    }
    | IDENTIFIER
    {
        if (strcmp($1, "i") == 0) {
            $$ = strdup($1);
        } else {
            asprintf(&$$, "!%s", $1);
        }
        free($1);
    }
    | expression PLUS expression   { asprintf(&$$, "%s + %s", $1, $3); free($1); free($3); }
    | expression MINUS expression  { asprintf(&$$, "%s - %s", $1, $3); free($1); free($3); }
    | expression TIMES expression  { asprintf(&$$, "%s * %s", $1, $3); free($1); free($3); }
    | expression DIVIDE expression { asprintf(&$$, "%s / %s", $1, $3); free($1); free($3); }
    | expression EQ expression     { asprintf(&$$, "%s = %s", $1, $3); free($1); free($3); }
    | expression NEQ expression    { asprintf(&$$, "%s <> %s", $1, $3); free($1); free($3); }
    | expression LT expression     { asprintf(&$$, "%s < %s", $1, $3); free($1); free($3); }
    | expression GT expression     { asprintf(&$$, "%s > %s", $1, $3); free($1); free($3); }
    | expression LTE expression    { asprintf(&$$, "%s <= %s", $1, $3); free($1); free($3); }
    | expression GTE expression    { asprintf(&$$, "%s >= %s", $1, $3); free($1); free($3); }
    | LPAREN expression RPAREN     { asprintf(&$$, "(%s)", $2); free($2); }
    | IDENTIFIER INCREMENT         { asprintf(&$$, "(let temp = !%s in %s := temp + 1; temp)", $1, $1); free($1); }
    | IDENTIFIER DECREMENT         { asprintf(&$$, "(let temp = !%s in %s := temp - 1; temp)", $1, $1); free($1); }
    ;

comment:
    SINGLE_COMMENT
    {
        asprintf(&$$, "  (* %s *)\n", $1);
        free($1);
    }
    | MULTI_COMMENT
    {
        asprintf(&$$, "  (* %s *)\n", $1);
        free($1);
    }
    ;

%%

void yyerror(const char* s) {
    fprintf(stderr, "Error de análisis: %s\n", s);
    exit(1);
}