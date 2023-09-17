/*Write a program to compute the sum of all elements in an array using pointers*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int sum(int *ptr, int size);
int main()
{
    int i = 0;
    int a[10] = {3, 7, 5, 4, 8, 22, 11, 21, 6, 9};
    sum(a, 10);
    return 0;
}
int sum(int *ptr, int size)
{
    int i, sum=0;
    for (i = 0; i <= size-1; i++)
    {
        sum=sum+ptr[i];
    }
    printf("Sum is %d",sum);
}
