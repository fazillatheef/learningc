#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LINES 1000
#define MAX_LEN 100
char *lineptr[MAX_LINES];
int line_count = 0;
int getlines(char *lineptr[],int);
void read_line(char [],int);
void print_lines(char *lineptr[],int lines);
void str_qsort(char *[],int,int);

int main(int argc, char *argv[])
{   
    int lines_entered = 0;
    printf("Enter strings?\n");

    while((lines_entered = getlines(lineptr,MAX_LINES)) > 0);
    if(lines_entered == -1) {
        printf("Number of lines is maximum!!!");
    }
    printf("Line count : %d\n",line_count);
    str_qsort(lineptr,0,line_count -1);
    print_lines(lineptr, line_count);
    for (int i = 0; i < line_count; i++) free(lineptr[i]);
    return 0;
}

int getlines(char *lineptr[],int max_lines)
{
    char line[MAX_LEN];
    int len_string;

    if(line_count > max_lines) return -1;
    read_line(line,MAX_LEN);
    len_string = strlen(line);
    if(len_string == 0) return -2;
    lineptr[line_count] = malloc(len_string);
    strcpy(lineptr[line_count],line);
    return ++line_count;
}

void print_lines(char *lineptr[],int lines)
{
    for(int i = 0; i < lines; i++)
        printf("%s\n",lineptr[i]);
}

void read_line(char str[],int line_len)
{
    char ch;
    int i;
    for(i = 0; (ch = getchar()) != '\n' && ch != EOF && i < line_len - 1; i++){
        str[i] = ch;
    }
    str[i] = '\0';
}
void swap(char *v[], int i, int j){
    char *temp;
    temp = v[i];
    v[i] = v[j];
    v[j] = temp;
}
void str_qsort(char *lines[],int left, int right)
{
    int i, last;
    if(left >= right)
        return;
    swap(lines,left,(left + right)/2);
    last = left;
    for( i = left + 1;i<= right; i++)
        if (strcmp(lines[i],lines[left]) < 0)
            swap(lines,++last,i);
    swap(lines,left,last);
    str_qsort(lines,left,last);
    str_qsort(lines,left + 1,right);
}