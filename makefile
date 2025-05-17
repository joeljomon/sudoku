CC = gcc

CFLAGS = -lncurses -I$(IDIR)

IDIR = ./include/
SRCDIR = ./src/

SOURCES = $(SRCDIR)*.c 

all: sudoku run clean

sudoku:
	$(CC) $(SOURCES) $(CFLAGS) -O $@

run:
	./sudoku

clean:
	rm sudoku
