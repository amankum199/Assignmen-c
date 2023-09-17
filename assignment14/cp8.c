/* Write a program to find the second smallest number in an array.Take array values
from the user*/
#include <stdio.h>
int main()
{
    int a[10], min = 9999, min2 = 99999;
    printf("Enter the number\n");
    for (int i = 0; i <= 9; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i <= 9; i++)
    {
        if (a[i] < min)
        {
            min2 = min;
            min = a[i];
        }
        if (a[i] > min && a[i] < min2)
        {
            min2 = a[i];
        }
    }
    printf(" second smallest number is %d", min2);
    return 0;
}