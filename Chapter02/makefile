CC=gcc
all : 01.sizes.o 02.constants.o
asm : 02.constants.s
%.o : %.c
	$(CC) -Wall -g $< -o $@ 

%.s : %.c
	$(CC) -S -Og $@ $< 

clean : 
	rm -f *.o *.s