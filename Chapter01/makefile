CC=gcc
all : memory.o 01.hello_world.o 02.conv.o 03.eof.o 04.plusplus.o 05.count_chars.o \
06.count_lines.o 07.replace_multiple_spaces.o 08.assist.o 09.wc.o 10.count_all.o \
11.hist_word.o 12.hist_char.o 14.max_line.o
asm : conv.s	

power : func.o power.o
	$(CC) -o func_power.o func.o power.o

power.o : 13.power.c
	$(CC) -c  $< -o $@
func.o : 13.func.c
	$(CC) -c  $< -o $@

%.o : %.c
	$(CC) -Wall $< -o $@ 

%.s : %.c
	$(CC) -S -Og $@ $< 

clean : 
	rm -f *.o *.s