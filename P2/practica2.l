%{
#include <stdlib.h>
#include "practica2.tab.h"
#include "colors.h"

int yyerror();
%}

/* Definiciones */
codificacion    (UTF-8)|(UTF-16)
letra           [a-zA-ZÑñ_]
numero          [0-9]
caracter_esp    [\~\@\#\$\%\^\*\!\"$$$$\+\{\}\"\|\[\]\;\'\\\,\.\/\s\:\t\-]
contenido_etiq  ({letra}|{numero}|{caracter_esp})*
prologo         "<?xml version=\"1.0\" encoding=\""{codificacion}"\"?>"

%%


"\n"                            { yylineno++; }
{prologo}                       { return PROLOGO_XML; }
"<"                             { return INICIO_ETIQUETA_APERTURA; }
"</"                            { return INICIO_ETIQUETA_CIERRE; }
">"                             { return FIN_ETIQUETA; }
"<!--".*"--".*"-->"             { printf(RED"\nError en la línea %d\nUn comentario no puede contener la cadena '--'\n\n", yylineno);exit(1);}
"<!--".*"-->"                   { return COMENTARIO; }
({letra})({letra}|{numero})*    { yylval.string = strdup(yytext);return NOMBRE_ETIQUETA;}
{contenido_etiq}                { return CONTENIDO_ETIQUETA; }
.                               { /* Ignorar otros caracteres */ }

%%

/* Funciones auxiliares */
int yyerror() {
    printf(RED"\nCodificación inválida: debe ser UTF-8 o UTF-16\n\n");
    exit(1);
}

int yywrap() {
    printf(GREEN"\nSintaxis XML correcta.\n\n");
    return 1;
}