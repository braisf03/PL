#include <stdio.h>
#include "parser.tab.h"

extern FILE* yyin;
extern int yylineno;
extern char* yytext;

int main(int argc, char** argv) {
    if (argc != 2) {
        printf("Uso: %s archivo_entrada.c\n", argv[0]);
        return 1;
    }

    FILE* input_file = fopen(argv[1], "r");
    if (!input_file) {
        printf("No se pudo abrir el archivo %s\n", argv[1]);
        return 1;
    }

    yyin = input_file;
    
    
    int result = yyparse();
    
    if (result != 0) {
        printf("Error de análisis en la línea %d cerca del token '%s'\n", yylineno, yytext);
    }

    fclose(input_file);
    return result;
}

