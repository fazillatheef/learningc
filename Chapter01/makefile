CC=gcc
all : memory.o hello_world.o conv.o eof.o plusplus.o count_chars.o \
count_lines.o replace_multiple_spaces.o assist.o wc.o count_all.o
asm : conv.s	

%.o : %.c
	$(CC) $< -o $@ 

%.s : %.c
	$(CC) -S -Og $@ $< 

clean : 
	rm -f *.o *.s