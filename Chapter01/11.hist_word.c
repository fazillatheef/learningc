#include <stdio.h>
#define MAX_WORD 20

main()
{
        int ch, i, j, len_word;
        int hist[MAX_WORD];

        len_word = 0;

        for (i = 0; i < MAX_WORD; i++)
                hist[i] = 0;
        
        while ((ch = getchar()) != EOF){
                if (ch == '\n'|| ch == '\t' || ch == ' '){
                        if (len_word > MAX_WORD-1)
                                printf("There is a word that is longer than %d",MAX_WORD);
                        else
                                hist[len_word]++;
                        len_word = 0;
                }
                else{
                        len_word++;
                }
        }
        printf("The histogram is as follows:-\n");
        for (i = 0; i < MAX_WORD; i++){
                printf("%2d ",i);
                for (j = 0;j < hist[i]; j++)
                        printf("#");
                printf("\n");
        }
}