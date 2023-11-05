#include <stdio.h>
#define WIDTH 13
#define SIZE  100
main()
{
        printf("Size: %3d ,Width: %3d\n",SIZE,WIDTH);

        for(int i=1; i <= SIZE; i++){
                printf("%03d%c",i,((i %WIDTH)==0 || i == SIZE )?'\n':' ');
        }

}