%{
#include "parser.tab.h"
#include <string.h>
%}

%x COMMENT
%x LINE_COMMENT

%%

"/*"         { BEGIN(COMMENT); yymore(); }
<COMMENT>"*/" { BEGIN(INITIAL); yylval.sval = strdup(yytext); return MULTI_COMMENT; }
<COMMENT>.    { yymore(); }
<COMMENT>\n   { yymore(); }

"//"          { BEGIN(LINE_COMMENT); yymore(); }
<LINE_COMMENT>.  { yymore(); }
<LINE_COMMENT>\n { BEGIN(INITIAL); yylval.sval = strdup(yytext); return SINGLE_COMMENT; }

"int"       { return INT; }
"return"    { return RETURN; }
"if"        { return IF; }
"else"      { return ELSE; }
"while"     { return WHILE; }
"for"       { return FOR; }
"+"         { return PLUS; }
"-"         { return MINUS; }
"*"         { return TIMES; }
"/"         { return DIVIDE; }
"="         { return ASSIGN; }
"=="        { return EQ; }
"!="        { return NEQ; }
"<"         { return LT; }
">"         { return GT; }
"<="        { return LTE; }
">="        { return GTE; }
"++"        { return INCREMENT; }
"--"        { return DECREMENT; }
"+="        { return PLUS_ASSIGN; }
"-="        { return MINUS_ASSIGN; }
"*="        { return TIMES_ASSIGN; }
"/="        { return DIVIDE_ASSIGN; }
"("         { return LPAREN; }
")"         { return RPAREN; }
"{"         { return LBRACE; }
"}"         { return RBRACE; }
";"         { return SEMICOLON; }
","         { return COMMA; }
[a-zA-Z_][a-zA-Z0-9_]*  { yylval.sval = strdup(yytext); return IDENTIFIER; }
[0-9]+      { yylval.ival = atoi(yytext); return NUMBER; }
[ \t\n]     { /* Ignorar espacios en blanco */ }
.           { printf("Carácter no reconocido: %s\n", yytext); }

%%

int yywrap(void) {
    return 1;
}

