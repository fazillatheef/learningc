#include <stdio.h>

void swap(int v[], int i, int j);
void qsort(int v[], int left, int right);

int main(int agrc, char *argv[])
{
    int arr[] = {5,7,2,4,8,1};
    qsort(arr,0,5);
    for(int i = 0; i < 6; i++)
        printf("%d \n",arr[i]);
    return 0;
}
void qsort(int v[], int left, int right)
{
    int i, middle_pos;
    
    if (left >= right) /* do nothing if array contains */
        return;        /* fewer than two elements */
    
    swap(v, left, (left + right)/2); /* save partition elem to safe place*/
                                    /* to v[0]. Beginning of the array */
    middle_pos = left; 
    for (i = left + 1; i <= right; i++)  /* partition */
        if (v[i] < v[left])
            swap(v, ++middle_pos, i); /* everything that is less than the middle 
                                  element will be put to the left*/
    swap(v, left, middle_pos); /*restore the middle elem to the middle_pos element position*/
    qsort(v, left, middle_pos-1);
    qsort(v, middle_pos+1, right);
    /* restore partition  elem */
}

void swap(int v[], int i, int j)
{
    int temp;
    temp = v[i];
    v[i] = v[j];
    v[j] = temp;
}