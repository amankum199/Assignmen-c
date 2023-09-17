/*Write a function to find the smallest number from the given array of any size. (TSRS)*/
#include <stdio.h>
int smallest(int b[]);
int main()
{
    int a[10];
    printf("Enter the number\n");
    for (int i = 0; i <= 9; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Smallest number is %d",smallest(a));
    return 0;
}
int smallest(int b[])
{
    int min = 99999;
    for (int i = 0; i <= 9; i++)
    {
        if (b[i] < min)
            min = b[i];
    }
    return min;
}