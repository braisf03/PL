%{
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "colors.h"

void yyerror (char const *);
extern int yylineno;
extern int yylex();

void imprimir_error_etiqueta(char* etiqueta_apertura, char* etiqueta_cierre);
%}

%union {
    char* string;
}

%token <string> PROLOGO_XML INICIO_ETIQUETA_APERTURA INICIO_ETIQUETA_CIERRE FIN_ETIQUETA NOMBRE_ETIQUETA CONTENIDO_ETIQUETA COMENTARIO

%start S

%%

/* Reglas de producción */

S
    : PROLOGO_XML cuerpo
    | cuerpo
    | cuerpo PROLOGO_XML {
        printf(RED"\nError: la etiqueta del prólogo debe ser el primer elemento del archivo\n\n");
        exit(1);
    }
;

cuerpo
    : COMENTARIO cuerpo
    | etiquetas cuerpo
    | COMENTARIO
    | etiquetas
;

etiquetas    
    : INICIO_ETIQUETA_APERTURA NOMBRE_ETIQUETA FIN_ETIQUETA contenido cuerpo INICIO_ETIQUETA_CIERRE NOMBRE_ETIQUETA FIN_ETIQUETA {
        if(strcmp($2, $7) != 0) {
            imprimir_error_etiqueta($2, $7);
        }
    }
    | INICIO_ETIQUETA_APERTURA NOMBRE_ETIQUETA FIN_ETIQUETA cuerpo INICIO_ETIQUETA_CIERRE NOMBRE_ETIQUETA FIN_ETIQUETA {
        if(strcmp($2, $6) != 0) {
            imprimir_error_etiqueta($2, $6);
        }
    }
    | INICIO_ETIQUETA_APERTURA NOMBRE_ETIQUETA FIN_ETIQUETA contenido INICIO_ETIQUETA_CIERRE NOMBRE_ETIQUETA FIN_ETIQUETA {
        if(strcmp($2, $6) != 0) {
            imprimir_error_etiqueta($2, $6);
        }
    }
    | INICIO_ETIQUETA_APERTURA NOMBRE_ETIQUETA FIN_ETIQUETA INICIO_ETIQUETA_CIERRE NOMBRE_ETIQUETA FIN_ETIQUETA {
        if(strcmp($2, $5) != 0) {
            imprimir_error_etiqueta($2, $5);
        }
    }
;

contenido
    : CONTENIDO_ETIQUETA contenido
    | NOMBRE_ETIQUETA contenido
    | NOMBRE_ETIQUETA
    | CONTENIDO_ETIQUETA
;                   

%%

/* Funciones auxiliares */

void imprimir_error_etiqueta(char* etiqueta_apertura, char* etiqueta_cierre) {
    printf(RED"\nError sintáctico en la línea %d\n", yylineno);
    printf(RED"La etiqueta de cierre no se corresponde con la de apertura\n");
    printf(YELLOW"Se esperaba \"%s\" y se encontró \"%s\"\n\n", etiqueta_apertura, etiqueta_cierre);
    exit(1);
}

int main(int argc, char *argv[]) {
    extern FILE *yyin;

    if (argc != 2) {
        printf(YELLOW"\nError: Debe proporcionar un archivo XML como argumento.\n\n");
        return 1;
    }

    char *ext = strrchr(argv[1], '.');
    if (ext == NULL || strcmp(ext, ".xml") != 0) {
        printf(YELLOW"\nNo es un archivo XML válido\n\n");
        return 1;
    }

    yyin = fopen(argv[1], "r");
    if (yyin == NULL) {
        printf(YELLOW"\nError: no se pudo abrir el archivo\n");
        return 1;
    }

    yyparse();
    fclose(yyin);
    return 0;
}