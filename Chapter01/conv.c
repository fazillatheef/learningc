#include <stdio.h>
#define LOWER 0
#define UPPER 300
#define STEP 10

main()
{    
        float celsius;
        
        for(int farh=LOWER; farh<=UPPER; farh += STEP){
                celsius = 5.0 * (farh - 32.0) / 9.0;
                printf("%3d : %6.1f\n",farh,celsius);
        }
}