#include <stdio.h>

int main(int argc, char *argv[])
{
    int a[10]; 
    int *p = a;
    char *x = a;

    for(int i = 0; i < 10; i++) a[i] = i;

    for(int i = 0; i < 10; i++){
        printf("int %p -> %d\n",p + i, *(p + i));
        printf("char %p -> %d\n",x + i, *(x + i));
    }
    return 0;
}