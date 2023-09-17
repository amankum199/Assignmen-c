/*Write a function to find the first occurrence of adjacent duplicate values in the array.
Function has to return the value of the element.*/
#include <stdio.h>
int dup(int b[]);
int main()
{
    int a[10];
    printf("Enter 10 number\n");
    for (int i = 0; i <= 9; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Duplicate adjacent value is %d ",dup(a));
    return 0;
}

int dup(int b[])
{
    int i;
    for (i = 0; i <= 9; i++)
    {
        if (b[i] == b[i + 1])
        {
            return b[i];
        }
    }
}