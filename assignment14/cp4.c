/*Write a program to find the greatest number stored in an array of size 10. Take array
values from the use*/
#include <stdio.h>
int main()
{
    int a[10], max = -9999;
    printf("Enter the number\n");
    for (int i = 0; i <= 9; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i <= 9; i++)
    {
        if (a[i] > max)
            max = a[i];
    }
    printf("Greatest number is %d", max);
    return 0;
}