#include <stdio.h>
#define MAX_LINE 100

int get_line(char * line);
void copy(char *src,char *dest);

main()
{       
        int max_len, cur_len;
        char max_line[MAX_LINE],cur_line[MAX_LINE];
        max_len = cur_len = 0;

        while((cur_len = get_line(cur_line)) > 0){
                if(cur_len  > max_len){
                        max_len = cur_len;
                        copy(cur_line, max_line);
                }
        }
        printf("Longest line is '%s'\n",max_line);
}

int get_line(char *line)
{
        char ch;
        int pos = 0;

        while((ch = getchar()) != '\n' && pos < MAX_LINE - 1){
                if(ch == EOF){
                        line[pos] = '\0';
                        return pos;
                }
                line[pos] = ch;
                pos++;
        }

        line[pos] = '\0';
        return pos;
}
void copy(char *src, char *dest)
{
        for (int i = 0; i < MAX_LINE; i++)
                dest[i] = src[i];
}