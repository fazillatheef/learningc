#include <stdio.h>

main()
{
        int ch, nl=0, nc=0, nt=0, ns=0;

        while((ch=getchar()) != EOF){
                switch(ch){
                        case '\n':
                                nl++;
                                break;
                        case ' ':
                                ns++;
                                break;
                        case '\t':
                                nt++;
                                break;
                        default:
                                nc++;
                                break;
                }
        }
        printf("\nThe number of lines is %d.\n",nl);
        printf("And the number of spaces is %d\n",ns);
        printf("And the number of tabs is %d\n",nt);
        printf("And the number of chars is %d\n",nc);
}
