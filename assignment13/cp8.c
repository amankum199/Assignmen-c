/*Write a recursive function to print first N terms of Fibonacci series*/
#include <stdio.h>
int fib(int n);
int main()
{
    int a;
    printf("Enter the number\n");
    scanf("%d", &a);
    for (int i = 1; i <= a; i++)
        printf("%d ", fib(i));
    return 0;
}
int fib(int n)
{
    if (n == 0 || n == 1)
        return n;
    else
        return fib(n - 1) + fib(n - 2);
}