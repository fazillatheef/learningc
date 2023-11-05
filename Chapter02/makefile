CC=gcc
all : 01.sizes.o 02.constants.o 03.cast.o 04.hex_calc.o 05.display_grid.o
asm : 02.constants.s
%.o : %.c
	$(CC) -Wall -g $< -o $@ 

%.s : %.c
	$(CC) -S -Og $@ $< 

clean : 
	rm -f *.o *.s