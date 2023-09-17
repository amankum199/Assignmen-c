/*Write a recursive function to calculate sum of first N odd natural numbers*/
#include <stdio.h>
int rfn(int n);
int main()
{
    int a;
    printf("Enter the number\n");
    scanf("%d", &a);
    printf("sum of first %d odd natural number is %d", a, rfn(a));
}
int rfn(int n)
{
    int sum;
    if (n ==1)
    return 1;
    else
        sum = 2*n-1 + rfn(n - 1);
    return sum;
}