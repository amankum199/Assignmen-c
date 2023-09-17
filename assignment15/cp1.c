/*Write a function to find the greatest number from the given array of any size. (TSRS)*/
#include <stdio.h>
int greatest(int b[]);
int main()
{
    int a[10];
    printf("Enter the number\n");
    for (int i = 0; i <= 9; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Greatest number is %d",greatest(a));
    return 0;
}
int greatest(int b[])
{
    int max = -9999;
    for (int i = 0; i <= 9; i++)
    {
        if (b[i] > max)
            max = b[i];
    }
    return max;
}