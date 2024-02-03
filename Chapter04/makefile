CC=gcc
all : 01.find.o hashmap.o 02.polish.o
%.o : %.c
	$(CC) -Wall -g $< -o $@ 

clean : 
	rm -f *.o *.s