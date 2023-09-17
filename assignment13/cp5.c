/*Write a recursive function to calculate sum of digits of a given number*/
#include <stdio.h>
int rfn(int n);
int main()
{
    int a;
    printf("Enter the number\n");
    scanf("%d", &a);
    printf("sum of digit of %d is %d", a, rfn(a));
}
int rfn(int n)
{
    int sum;
    if (n ==0)
    return 0;
    else
        sum = n%10 + rfn(n/10);
    return sum;
}