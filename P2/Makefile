FUENTE = practica2
PRUEBA1 = ejemplo1.xml
PRUEBA2 = ejemplo2.xml
PRUEBA3 = ejemplo3.xml
PRUEBA4 = ejemplo4.xml
PRUEBA5 = ejemplo5.txt
LIB = lfl

all: compile run

compile:
	flex $(FUENTE).l
	bison -o $(FUENTE).tab.c $(FUENTE).y -yd
	gcc -o $(FUENTE) lex.yy.c $(FUENTE).tab.c -$(LIB) -ly

run1:
	./$(FUENTE) $(PRUEBA1)

run2:
	./$(FUENTE) $(PRUEBA2)

run3:
	./$(FUENTE) $(PRUEBA3)

run4:
	./$(FUENTE) $(PRUEBA4)

run5:
	./$(FUENTE) $(PRUEBA5)

run6:
	./$(FUENTE)

clean:
	rm $(FUENTE) lex.yy.c $(FUENTE).tab.c $(FUENTE).tab.h
