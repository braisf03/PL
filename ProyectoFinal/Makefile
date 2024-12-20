### Archivos de prueba
BASICO = pruebas/basico.c
BUCLES = pruebas/bucles.c
JUNTOS = pruebas/junto.c
FUNCTIONS = pruebas/functions.c

### Archivos de error
CORCHFN = errores/errorCorcheteFN.c 
CORCHIF = errores/errorCorcheteIF.c 
PARENFN = errores/errorParentesisFN.c
PARENIF = errores/errorParentesisIF.c
VAR = errores/errorVariable.c
FORCORCH = errores/errorForCorch.c
FORPAREN = errores/errorForParen.c
WHILECORCH = errores/errorWhileCorch.c
WHILEPAREN = errores/errorWhileParen.c

### Ejecución para obtener el traductor

all:
	flex lexer.l
	bison -d parser.y
	gcc -o translator main.c parser.tab.c lex.yy.c -lfl

###Compilación de archivos de prueba

basico: all
	./translator $(BASICO) > output.ml

bucles: all
	./translator $(BUCLES) > output.ml

junto: all
	./translator $(JUNTOS) > output.ml

functions: all
	./translator $(FUNCTIONS) > output.ml

###Compilación de archivos de error

# Errores de funciones/if-then-else
errCorchFN: all
	./translator $(CORCHFN) > output.ml

errCorchIF: all
	./translator $(CORCHIF)	> output.ml

errParenFN: all
	./translator $(PARENFN)	> output.ml

errParenIF: all
	./translator $(PARENIF)	> output.ml

# Error de variables
errVariable: all
	./translator $(VAR)	> output.ml

# Errore de bucles for/while
errForCorch: all
	./translator $(FORCORCH) > output.ml

errForParen: all
	./translator $(FORPAREN) > output.ml

errWhileCorch: all
	./translator $(WHILECORCH) > output.ml

errWhileParen: all
	./translator $(WHILEPAREN) > output.ml

### Borrar los archivos que sobran
clean:
	rm translator lex.yy.c parser.tab.c parser.tab.h