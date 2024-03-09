#include <ctype.h>
#include <stdio.h>
#define MAX_BUFFER 100

char getch(void);
void ungetch(char);
int getint(int *);

int main(int agrc, char* argv[])
{
        int a;

        getint(&a);        
        printf("The number is %d\n",a);
        return 0;
}
/* getint:  get next integer from input into *pn */
int getint(int *pn)
{
        int c, sign;
        while (isspace(c = getch()));
        if (!isdigit(c) && c != EOF && c != '+' && c != '-') {
                ungetch(c);  /* it is not a number */
                return 0; 
        }
        sign = (c == '-') ? -1 : 1;
        if (c == '+' || c == '-')
                c = getch();
        for (*pn = 0; isdigit(c); c = getch())
                *pn = 10 * *pn + (c - '0');
        *pn *= sign;
        if (c != '\n')
                ungetch(c);
        return c; 
}

char buffer[MAX_BUFFER];
int p_buffer = 0;
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