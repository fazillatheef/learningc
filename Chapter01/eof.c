#include <stdio.h>

main()
{       
        int ch;
        printf("Size of EOF is %ld and value is %d\n",sizeof(EOF),EOF);

        while((ch = getchar()) != EOF) {
                putchar(ch);
        }
}