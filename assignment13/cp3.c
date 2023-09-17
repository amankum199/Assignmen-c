/*Write a recursive function to calculate sum of first N even natural numbers*/
#include <stdio.h>
int rfn(int n);
int main()
{
    int a;
    printf("Enter the number\n");
    scanf("%d", &a);
    printf("sum of first %d even natural number is %d", a, rfn(a));
}
int rfn(int n)
{
    int sum;
    if (n ==0)
    return 0;
    else
        sum = 2*n + rfn(n - 1);
    return sum;
}