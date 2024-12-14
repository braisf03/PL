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
%token <sval> IDENTIFIER
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
%type <sval> for_init
%type <sval> for_condition
%type <sval> for_update
%type <sval> compound_assign

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
        asprintf(&$$, "  %s\n", $2);
        free($2);
    }
    | IF LPAREN expression RPAREN LBRACE statements RBRACE
    {
        asprintf(&$$, "  if %s then\n%s  else ()\n", $3, $6);
        free($3);
        free($6);
    }
    | IF LPAREN expression RPAREN LBRACE statements RBRACE ELSE LBRACE statements RBRACE
    {
        asprintf(&$$, "  if %s then\n%s  else\n%s", $3, $6, $10);
        free($3);
        free($6);
        free($10);
    }
    | WHILE LPAREN expression RPAREN LBRACE statements RBRACE
    {
        asprintf(&$$, "  while %s do\n%s  done\n", $3, $6);
        free($3);
        free($6);
    }
    | FOR LPAREN for_init SEMICOLON for_condition SEMICOLON for_update RPAREN LBRACE statements RBRACE
    {
        asprintf(&$$, "  let rec for_loop %s =\n    if %s then\n      begin\n%s        %s;\n        for_loop %s\n      end\n    else\n      ()\n  in\n  for_loop %s\n",
                 $3, $5, $10, $7, $7, $3);
        free($3);
        free($5);
        free($7);
        free($10);
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
    ;

declaration:
    INT IDENTIFIER ASSIGN expression SEMICOLON
    {
        asprintf(&$$, "  let %s = ref %s\n", $2, $4);
        free($2);
        free($4);
    }
    | INT IDENTIFIER SEMICOLON
    {
        asprintf(&$$, "  let %s = ref 0\n", $2);
        free($2);
    }
    ;

for_init:
    INT IDENTIFIER ASSIGN expression
    {
        asprintf(&$$, "(ref %s)", $4);
        free($2);
        free($4);
    }
    | IDENTIFIER ASSIGN expression
    {
        asprintf(&$$, "%s := %s", $1, $3);
        free($1);
        free($3);
    }
    ;

for_condition:
    expression
    {
        $$ = $1;
    }
    ;

for_update:
    IDENTIFIER ASSIGN expression
    {
        asprintf(&$$, "%s := %s", $1, $3);
        free($1);
        free($3);
    }
    | IDENTIFIER INCREMENT
    {
        asprintf(&$$, "%s := !%s + 1", $1, $1);
        free($1);
    }
    | IDENTIFIER DECREMENT
    {
        asprintf(&$$, "%s := !%s - 1", $1, $1);
        free($1);
    }
    | IDENTIFIER compound_assign expression
    {
        asprintf(&$$, "%s := !%s %s %s", $1, $1, $2, $3);
        free($1);
        free($2);
        free($3);
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
        asprintf(&$$, "!%s", $1);
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

%%

void yyerror(const char* s) {
    fprintf(stderr, "Error de análisis: %s\n", s);
    exit(1);
}

