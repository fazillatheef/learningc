#include <stdio.h>
#include "polish.h"

static double stack[MAX_BUFFER] = { 0 };
static int stack_pos = 0;
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