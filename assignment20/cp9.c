/*Write a program to print the elements of an array in reverse order.*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int i = 0;
    int a[10] = {3, 7, 5, 4, 8, 22, 11, 21, 6, 9};
    for (i = 9; i >=0; i--)
    {
        printf("%d ",a[i]);
    }
    return 0;
}