#include <stdio.h>
#define swap(t,x,y) \
            t temp; \
            temp = x; \
            x = y; \
            y = temp; \
            printf("%d %d\n",x,y);

int main(int argc, char *argv[])
{
    int a = 5, b = 3;
    swap(int,a,b)

    return 0;
}