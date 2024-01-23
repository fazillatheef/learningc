#include <ctype.h>
#include "polish.h"


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