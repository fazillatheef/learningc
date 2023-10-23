#include <stdio.h>

main()
{
        int ch;

        while ((ch = getchar()) != '\n'){
                putchar(ch);
                if (ch == ' '){
                        while((ch = getchar()) == ' ');
                        putchar(ch);
                }
        }
        putchar('\n');
}