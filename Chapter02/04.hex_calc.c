#include <stdio.h>

void dec2bin(int num)
{
        for(int i = 7; i >= 0; i--){
                printf("%d", (num >> i) & 1 );
        }
}

main()
{
        int a = 0xAF;
        dec2bin(a);
        printf("\n");
}