/*
(4 + 5) * (1 - 4) = 4 5 + 1 4 - *
*/
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

#define NUMBER 1
#define OP 2
#define MAX_BUFFER 100

void push(double);
double pop(void);
int getops(char []);
char getch(void);
void ungetch(char ch); // supports 100 chars in buffer, only 1 needed here

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

int getops(char s[]){
        char c;
        int i = 0;
        while ((c = getch()) == ' ' || c == '\t' || c == '\n');
        s[0] = c;
 
        if(isdigit(c)|| c == '.'){
                if(isdigit(c)) while(isdigit(c = getch())) s[++i] = c;
                if(c == '.') { 
                        s[++i] = '.';
                        while(isdigit(c = getch())) s[++i] = c;
                }
                s[++i] = '\0';

                ungetch(c);
                return NUMBER;
        }
        else{
                s[1] = '\0';
                return OP;
        }
        
}

char buffer[MAX_BUFFER];
int p_buffer = 0;
char getch(void)
{
        if(p_buffer > 0){
                return buffer[--p_buffer];
        } else return getchar();
}

void ungetch(char c)
{
        if(p_buffer >= MAX_BUFFER)
                printf("Buffer full!!");
        else
                buffer[p_buffer++] = c;
}
double stack[MAX_BUFFER] = { 0 };
int stack_pos = 0;
void push(double num)
{       
        if(stack_pos > MAX_BUFFER) printf("Stack is full!!!");
        else stack[stack_pos++] = num;
}
double pop(void)
{
        if(stack_pos <= 0){
                printf("Stack is empty. Error.");
                return 0.0;
        } else return stack[--stack_pos];
}