#include <stdio.h>

void itoa(int num);

int main(int argc, char *argv[])
{
    itoa(-536);
    printf("\n");
    return 0;
}

void itoa(int num)
{
    if (num < 0) {
        putchar('-');
        num = -num;
    }

    if (num / 10 != 0) {
        itoa(num / 10);
    }

    putchar(num % 10 + '0');
}