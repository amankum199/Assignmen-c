/*Write a function to check whether a given number contains a given digit or not.
(TSRS)*/
#include <stdio.h>
int digit(int, int);
int main()
{
    int a, b;
    printf("Enter the number\n");
    scanf("%d", &a);
    printf("Enter the digit\n");
    scanf("%d", &b);
    printf("Matching %d", digit(a, b));
    return 0;
}
int digit(int n, int l)
{
    int rem;
    while (n)
    {
        rem = n % 10;
        if (rem == l)
            return 1;
        else
            n = n / 100;
    }
    return 0;
}
