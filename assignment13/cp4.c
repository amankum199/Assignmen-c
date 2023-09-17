/*Write a recursive function to calculate sum of squares of first n natural numbers*/
#include <stdio.h>
int rfn(int n);
int main()
{
    int a;
    printf("Enter the number\n");
    scanf("%d", &a);
    printf("sum of square of first %d natural number is %d", a, rfn(a));
}
int rfn(int n)
{
    int sum;
    if (n ==0)
    return 0;
    else
        sum = n*n + rfn(n - 1);
    return sum;
}