/*Write a function to calculate HCF of two numbers. (TSRS)*/
#include <stdio.h>
int hcfnum(int a, int b);
int main()
{
    int a, b;
    printf("Enter two number\n");
    scanf("%d %d", &a, &b);
    printf("HCF of %d and %d is %d", a, b, hcfnum(a, b));
    return 0;
}

int hcfnum(int n1, int n2)
{
    int i, hcf;
    for (i = 1; i <= n1 && i <= n2; i++)
    {
        if (n1 % i == 0 && n2 % i == 0)
            hcf = i;
    }
    return hcf;
}