#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include "polish.h" 
int main()
{       
        char s[MAX_BUFFER];
        double a, b;
        int type;
        while (1){
                type = getops(s);
                if(type == NUMBER) push(atof(s));
                else if(type == OP){
                        if(s[0] == '=') printf("Answer is %.2f\n",pop());
                        else {
                                b = pop();
                                a = pop();
                                switch(s[0]){
                                        case '+': 
                                                push(a + b);
                                                break;
                                        case '-': 
                                                push(a - b);
                                                break;
                                        case '*': 
                                                push(a * b);
                                                break;
                                        case '/':
                                                push(a / b);
                                                break;
                                        default : printf("Unsupported Operation!!\n");
                                                break;
                                }   
                        }    
                }
        }
        return 0;
}