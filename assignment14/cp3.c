/*Write a program to calculate the sum of all even numbers and sum of all odd
numbers, which are stored in an array of size 10. Take array values from the user.*/
#include <stdio.h>
int main()
{
    int a[10], osum = 0, esum = 0;
    printf("Enter the number\n");
    for (int i = 0; i <= 9; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i <= 9; i++)
    {
        if (a[i] % 2 == 0)
            esum = esum + a[i];
        else
            osum = osum + a[i];
    }
    printf("sum of even number is %d.\n", esum);
    printf("sum of odd number is %d.", osum);

    return 0;
}