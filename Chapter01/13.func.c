#include <stdio.h>
#include "power.h"
/* test power function */
main()
{
        int i;
        printf("%8s | %7d | %6d\n","Power of",2,-3);
        for (i = 0; i < 10; ++i)
                printf("%8d | %7d | %6d \n",i, power(2,i), power(-3,i));
        return 0;
}
