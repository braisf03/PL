%{
#include <stdio.h>

int total_chars = 0;
int total_words = 0;
int total_upper = 0;
int total_lower = 0;
int total_mix = 0;
int total_ints = 0;
int total_phrases = 0;
%}

%option noyywrap

UPPERCASE [A-ZÁÉÍÓÚÜÑ,]+
LOWERCASE [a-záéíóúüñ,]+
NUMBER [+-]?([0-9]+\.?[0-9]*|\.[0-9]+)([eE][+-]?[0-9]+)?
MIXED [^ \t\n,.]+
SPACE [ \t]+
DOT [.?!][ \t\n]*


%%

{UPPERCASE} { total_chars += yyleng; total_words++; total_upper++;}
{LOWERCASE} { total_chars += yyleng; total_words++; total_lower++;}
{NUMBER} { total_chars += yyleng; total_words++; total_ints++;}
{MIXED} { total_chars += yyleng; total_words++; total_mix++;}
{DOT} { total_phrases++;}
{SPACE} { /* ignorar espacios */ }

<<EOF>> { return 0; }

%%

int main(int argc, char * argv[]) {
    if (argc > 1) {
        FILE *file = fopen(argv[1], "r");
        if (!file) {
            fprintf(stderr, "Error: no se puede abrir el archivo %s\n", argv[1]);
            return 1;
        }
        yyin = file;
    }

    yylex();

    printf("Caracteres: %d\n", total_chars);
    printf("Palabras: %d\n", total_words);
    printf("Palabras mixtas: %d\n",total_mix);
    printf("Palabras en mayúscula: %d\n", total_upper);
    printf("Palabras en minúscula: %d\n", total_lower);
    printf("Palabras numéricas: %d\n", total_ints);
    printf("Frases: %d\n", total_phrases);

    if (argc > 1) {
        fclose(yyin);
    }

    return 0;
}