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
%token INT RETURN IF ELSE WHILE
%token PLUS MINUS TIMES DIVIDE
%token ASSIGN EQ NEQ LT GT LTE GTE
%token LPAREN RPAREN LBRACE RBRACE SEMICOLON

%type <sval> expression
%type <sval> statement
%type <sval> statements
%type <sval> function
%type <sval> program
%type <sval> declaration

%left ASSIGN
%left EQ NEQ
%left LT GT LTE GTE
%left PLUS MINUS
%left TIMES DIVIDE

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
    | IDENTIFIER ASSIGN expression SEMICOLON
    {
        asprintf(&$$, "  %s := %s\n", $1, $3);
        free($1);
        free($3);
    }
    | expression SEMICOLON
    {
        asprintf(&$$, "  %s\n", $1);
        free($1);
    }
    ;

declaration:
    INT IDENTIFIER ASSIGN expression SEMICOLON
    {
        asprintf(&$$, "  let %s = %s\n", $2, $4);
        free($2);
        free($4);
    }
    | INT IDENTIFIER SEMICOLON
    {
        asprintf(&$$, "  let %s = 0\n", $2);
        free($2);
    }
    ;

expression:
    NUMBER
    {
        asprintf(&$$, "%d", $1);
    }
    | IDENTIFIER
    {
        $$ = strdup($1);
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
    ;

%%

void yyerror(const char* s) {
    fprintf(stderr, "Error de análisis: %s\n", s);
    exit(1);
}

