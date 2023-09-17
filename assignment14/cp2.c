/*Write a program to calculate the average of numbers stored in an array of size 10.
Take array values from the user*/
#include <stdio.h>
int main()
{
    int a[10], sum = 0;
    printf("Enter the number\n");
    for (int i = 0; i <= 9; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i <= 9; i++)
    {
        sum = sum + a[i];
    }
    float avg = sum / 10;
    printf("average is %.2f.", avg);
    return 0;
}