#include <stdio.h>
int fact(int);
int main()
{

    int i, num, sum = 0;
    printf("Enter the number.\n");
    scanf("%d", &num);
    for (i = 1; i <= num; i++)
    {
        sum =sum + (fact(i) / i);
    }
    printf("%d", sum);
    return 0;
}
int fact(int n)
{
    int factorial = 1;

    for (int i = 1; i <= n; i++)
        factorial = factorial * i;
    return factorial;
}
