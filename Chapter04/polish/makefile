CC=gcc
all : main.o 
main.o : main.c stack.c getch.c getops.c
	$(CC) -Wall -g main.c stack.c getch.c getops.c -o main.o

clean : 
	rm -f *.o *.s