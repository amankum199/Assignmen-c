/*Write a function to sort an array of int type values. [ void sort(int *ptr,int size); ]*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int sort(int *ptr, int size);
int main()
{
    int i = 0;
    int a[10] = {3, 7, 5, 4, 8, 22, 11, 21, 6, 9};
    sort(a, 10);
    for (i = 0; i < 10; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}
int sort(int *ptr, int size)
{
    int i, j, temp;
    for (i = 0; i < 9; i++)
    {
        for (j = i + 1; j < 10; j++)
        {
            if (ptr[i] > ptr[j])
            {
                temp = ptr[i];
                ptr[i] = ptr[j];
                ptr[j] = temp;
            }
        }
    }
}
