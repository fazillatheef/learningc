#include <stdio.h>

main()
{
        int ch;

        while ((ch = getchar()) != '\n'){
                switch(ch){
                        case '\t':
                                putchar('\\');
                                putchar('t');
                                break;
                        case '\b':
                                putchar('\\');
                                putchar('b');
                                break;
                        case '\\':
                                putchar('\\');
                                putchar('\\');
                                break;
                        default:
                                putchar(ch);
                                break;
                }
        }       
}