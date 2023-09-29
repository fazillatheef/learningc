#include <stdlib.h>
#include <stdio.h>

int main(int agrc,char* argv[])
{
  int* ptr;
  int a;

  ptr = &a;
  printf("Program name is %s\n",argv[0]);
  getchar();
  printf("Ptr is %p\n",ptr);
  getchar();

  ptr = malloc(10);
  printf("Ptr is %p\n",ptr);

  getchar();
  free(ptr);
  return 0;
}
/*
Checked memory allocation by examining 
cat /proc/<pid>/maps
The memory address for the malloc was in the heap and the local variable was in the stack.
*/