CC = gcc
FLEX = flex
BISON = bison
CFLAGS = -Wall -Wextra

all:
	flex lexer.l
	bison -d parser.y
	gcc -o translator main.c parser.tab.c lex.yy.c -lfl

