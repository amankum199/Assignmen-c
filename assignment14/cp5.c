/*Write a program to find the smallest number stored in an array of size 10. Take array
values from the use*/
#include <stdio.h>
int main()
{
    int a[10], min= 9999;
    printf("Enter the number\n");
    for (int i = 0; i <= 9; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i <= 9; i++)
    {
        if (a[i] < min)
            min = a[i];
    }
    printf("Smallest number is %d", min);
    return 0;
}