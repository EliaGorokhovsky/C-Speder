# Which compiler to use
CC		= gcc
# Which compiler flags to use with the compiler
CFLAGS 	= -g -Wall -Wstrict-prototypes -ansi -pedantic
# Which libraries are being linked
LFLAGS = -lSDL2
# What the name of the executable should be
OBJ_NAME = speder

main: main.o
	$(CC) $(CFLAGS) main.o -o $(OBJ_NAME) $(LFLAGS) 

main.o: main.c 
	$(CC) $(CFLAGS) -c main.c