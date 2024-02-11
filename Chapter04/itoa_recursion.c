#include <stdio.h>

void itoa(int num);

int main(int argc, char *argv[])
{
    itoa(-536);
    return 0;
}

void itoa(int num)
{
    static int first = 0;
    if(num < 0) {
        num *= -1;
        printf("-");
    }
    int d;
    if((d = num / 10) == 0){
        printf("%c",'0'+ (num % 10));
        return;
    } else {
        first++;
        itoa(d);
        first--;
        printf("%c",'0'+ (num % 10));
    }
    if(first == 0){
        printf("\n");
    }
}