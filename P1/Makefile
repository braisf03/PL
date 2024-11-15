### PL. Fichero makefile basico
# FUENTE: nombre fichero fuente con extension .l
FUENTE = p1
# PRUEBA: nombre fichero de prueba
PRUEBA1 = text1.txt
# PRUEBA2: nnombre de 2º ficehro de prueba
PRUEBA2 = text2.txt
# LIB (libreria flex): lfl (gnu/linux, windows); ll (macos)
LIB = lfl

all: compile

compile:
	flex $(FUENTE).l
	gcc -o $(FUENTE) lex.yy.c -$(LIB)

clean:
	rm $(FUENTE) lex.yy.c 

run1:
	./$(FUENTE) $(PRUEBA1)

run2:
	./$(FUENTE) $(PRUEBA2)

