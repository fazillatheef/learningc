#include <stdio.h>
int main(int argc, char *argv[])
{
    size_t a;
    printf("%lu\n",sizeof(a));
    printf("%lu\n",sizeof(short int));
    printf("%lu\n",sizeof(unsigned short int));
    printf("%lu\n",sizeof(char));
    return 0;
}