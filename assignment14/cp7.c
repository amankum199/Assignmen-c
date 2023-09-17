/*Write a program to find second largest in an array.Take array values from the user.*/
#include <stdio.h>
int main()
{
    int a[10], max = -9999, max2 = -99999;
    printf("Enter the number\n");
    for (int i = 0; i <= 9; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i <= 9; i++)
    {
        if (a[i] > max)
        {
            max2 = max;
            max = a[i];
        }
        if (a[i] < max && a[i] > max2)
        {
            max2 = a[i];
        }
    }
    printf(" second Greatest number is %d", max2);
    return 0;
}