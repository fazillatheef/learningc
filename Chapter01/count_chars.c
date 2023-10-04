#include <stdio.h>

main()
{
        int i = 0, c = 0;
        while (getchar() != 10) c++;
        printf("The number of characters entered in the while loop is %d\n",c);

        for (i=0; getchar() != EOF; i++) //Ctrl + D for EOF 
                ;
        printf("The number of characters entered in the for loop is %d\n",i);
}