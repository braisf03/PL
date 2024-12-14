CC = gcc
FLEX = flex
BISON = bison
CFLAGS = -Wall -Wextra

LEXER_C = lexer.c
LEXER_H = lexer.h
PARSER_C = parser.c
PARSER_H = parser.tab.h
OBJECTS = main.o lexer.o parser.o
EXECUTABLE = translator

all: $(EXECUTABLE)

$(EXECUTABLE): $(OBJECTS)
	$(CC) $(CFLAGS) -o $@ $(OBJECTS) -lfl

lexer.c lexer.h: lexer.l
	$(FLEX) lexer.l

main.o: main.c lexer.h parser.tab.h
	$(CC) $(CFLAGS) -c main.c -o main.o


lexer.o: lexer.c $(PARSER_H)
	$(CC) $(CFLAGS) -c lexer.c -o $@

parser.c parser.tab.h: parser.y
	$(BISON) -d -o parser.c parser.y

parser.o: parser.c
	$(CC) $(CFLAGS) -c parser.c -o $@

clean:
	rm -f $(EXECUTABLE) $(OBJECTS) $(LEXER_C) $(LEXER_H) $(PARSER_C) $(PARSER_H)
