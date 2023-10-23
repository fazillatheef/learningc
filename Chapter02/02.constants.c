#include <stdio.h>

main()
{
        char a = 'a';
        char b[] = "a";
        char *p;

        printf("a = %p, b = %p\n",&a,b);
        p = &a;
        printf("a -> %d %d\n",*p, *(p + 1));
        p = b;
        printf("b -> %d %d\n",*p, *(p + 1));
        enum complexity {EASY,MEDIUM,HARD};
        printf("%d %d %d\n",EASY,MEDIUM,HARD);
}