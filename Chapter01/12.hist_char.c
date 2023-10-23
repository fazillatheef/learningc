#include <stdio.h>
#define ALPHABETS 26

main()
{
        int ch, i, j;
        int hist[ALPHABETS];

        for (i = 0; i < ALPHABETS; i++)
                hist[i] = 0;
        
        while ((ch = getchar()) != EOF){
                if (ch >= 'A' && ch <= 'Z'){
                        hist[ch - 'A']++;
                }
                else if(ch >= 'a' && ch <= 'z'){
                        hist[ch - 'a']++;
                }
        }
        printf("The histogram is as follows:-\n");
        for (i = 0; i < ALPHABETS; i++){
                printf("%c ",i + 'A');
                for (j = 0;j < hist[i]; j++)
                        printf("#");
                printf("\n");
        }
}