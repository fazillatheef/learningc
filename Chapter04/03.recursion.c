#include <stdio.h>

void printd(int num);
int main(int argc, char *argv[])
{
    printd(1234);

    return 0;
}

void printd(int num)
{
    static int count = 0;
    count++;
    if(num < 0){
        putchar('-');
        num = -num;
    }
    if(num / 10)
        printd(num / 10);
        count--;
    
    putchar((num % 10) + '0');
    if(count == 0) putchar('\n');
}