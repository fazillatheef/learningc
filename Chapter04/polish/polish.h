/*
(4 + 5) * (1 - 4) = 4 5 + 1 4 - *
*/

#define NUMBER 1
#define OP 2
#define MAX_BUFFER 100

void push(double);
double pop(void);
int getops(char []);
char getch(void);
void ungetch(char ch); // supports 100 chars in buffer, only 1 needed here