%{
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "colors.h"

void yyerror (char const *);
extern int yylineno;
extern int yylex();

void print_tag_mismatch_error(char* opening_tag, char* closing_tag);

%}

%union {
    char* string;
}

%token <string> XMLPROLOG TAG_START_OPEN TAG_START_CLOSE TAG_END TAGNAME TAGCONTENT COMMENT

%start S

%%

/* Reglas de producción */

S
    : XMLPROLOG body
    | body
    | body XMLPROLOG {
        printf(RED"\n\nError: la etiqueta del prólogo ha de ser el primer elemento del archivo\n\n");
        exit(0);
    }
;

body
    : COMMENT body
    | tags body
    | COMMENT
    | tags
;

tags    
    : TAG_START_OPEN TAGNAME TAG_END content body TAG_START_CLOSE TAGNAME TAG_END {
        if(strcmp($2, $7) != 0) {
            print_tag_mismatch_error($2, $7);
        }
    }
    | TAG_START_OPEN TAGNAME TAG_END body TAG_START_CLOSE TAGNAME TAG_END {
        if(strcmp($2, $6) != 0) {
            print_tag_mismatch_error($2, $6);
        }
    }
    | TAG_START_OPEN TAGNAME TAG_END content TAG_START_CLOSE TAGNAME TAG_END {
        if(strcmp($2, $6) != 0) {
            print_tag_mismatch_error($2, $6);
        }
    }
    | TAG_START_OPEN TAGNAME TAG_END TAG_START_CLOSE TAGNAME TAG_END {
        if(strcmp($2, $5) != 0) {
            print_tag_mismatch_error($2, $5);
        }
    }
;

content
    : TAGCONTENT content
    | TAGNAME content
    | TAGNAME
    | TAGCONTENT
;                   

%%

/* Funciones auxiliares */

void print_tag_mismatch_error(char* opening_tag, char* closing_tag) {
    printf(RED"\n\nError sintáctico en la línea %d\n", yylineno);
    printf(RED"La etiqueta de cierre no se corresponde con la de apertura\n");
    printf(CYAN"Se esperaba \"%s\" y se encontró \"%s\"\n\n\n", opening_tag, closing_tag);
    exit(0);
}

int main(int argc, char *argv[]) {
    extern FILE *yyin;

    if (argc != 2) {
        printf(YELLOW"\nError: Debe proporcionar un archivo XML como argumento.\n\n");
        return 1;
    }

    char *ext = strrchr(argv[1], '.');
    if (ext == NULL || strcmp(ext, ".xml") != 0) {
        printf(RED"\n\nNo es un archivo XML válido\n\n\n");
        return 1;
    }

    yyin = fopen(argv[1], "r");
    if (yyin == NULL) {
        printf(RED"\nError: no se pudo abrir el archivo\n\n");
        return 1;
    }

    yyparse();
    fclose(yyin);
    return 0;
}