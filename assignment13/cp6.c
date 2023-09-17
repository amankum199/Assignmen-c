/*Write a recursive function to calculate factorial of a given number*/
#include<stdio.h>
int fact(int n);
int main()
{
    int a;
    printf("Enter the number\n");
    scanf("%d", &a);
    printf("Factorial of %d is %d", a, fact(a));
}
int fact(int n)
{
    int sum;
    if (n ==0 ||n==1)
    return n;
    else
        sum = n*fact(n-1);
    return sum;
}