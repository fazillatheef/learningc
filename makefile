CC=gcc
all : memory.o hello_world.o
	
%.o : %.c
	$(CC) $< -o $@ 
clean : 
	rm -f *.o