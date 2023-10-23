#include <stdio.h>

main()
{
        int ch,ot,ws,i;
        ot = ws = 0;
        int digits[10];

        for (i = 0; i < 10; i++) digits[i] = 0;

        while ((ch = getchar()) != EOF){
                if (ch >= '0' && ch <= '9') 
                        digits[ch - '0']++;
                else if (ch == ' '||ch == '\t'||ch =='\n')
                        ws++;
                else
                        ot++;
        }

        printf("Digits:-\n");
        for (i = 0; i < 10; i++) printf("%d -> %03d\n",i,digits[i]);
        printf("Whitespace : %03d\n", ws);
        printf("Others : %03d\n", ot);
}