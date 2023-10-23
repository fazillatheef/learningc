#include <stdio.h>

void printBinary(unsigned int num) {
        if (num > 1) {
                printBinary(num >> 1);
        }
        putchar((num & 1) ? '1' : '0');
}

main()
{
        printf("Size of char is %ld bytes\n",sizeof(char));
        printf("Size of int is %ld bytes\n",sizeof(int));
        printf("Size of float is %ld bytes\n",sizeof(float));
        printf("Size of double is %ld bytes\n",sizeof(double));
        printf("Size of short int is %ld bytes\n",sizeof(short int));
        printf("Size of long int is %ld bytes\n",sizeof(long int));
        printf("Size of long double is %ld bytes\n",sizeof(long double));

        unsigned int a;
        a = 0xFF;
        a = a << 1;
        printf("a = %X\n",a);
        printBinary(a);
        printf("\n");

        a = 0xFFFFFFFF;
        printf("a = %u\n",a);
}