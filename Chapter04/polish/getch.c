#include <stdio.h>
#include "polish.h"

static char buffer[MAX_BUFFER];
static int p_buffer = 0;
char getch(void)
{
        if(p_buffer > 0){
                return buffer[--p_buffer];
        } else return getchar();
}

void ungetch(char c)
{
        if(p_buffer >= MAX_BUFFER)
                printf("Buffer full!!");
        else
                buffer[p_buffer++] = c;
}