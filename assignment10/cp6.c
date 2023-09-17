/*Write a function to calculate the factorial of a number. (TSRS)*/
#include <stdio.h>
int fact(int);
int main()
{
    int num;
    printf("Enter the number\n");
    scanf("%d", &num);
    printf(" %d ", fact(num));
    return 0;
}
int fact(int n)
{
    int factorial = 1;

    for (int i = 1; i <= n; i++)
        factorial = factorial * i;
    return factorial;
}
