/*Write a function to calculate the number of combinations one can make from n items
and r selected at a time. (TSRS)*/
#include <stdio.h>
int fact(int);
int comb(int, int);
int main()
{
    int num, rum;
    printf("Enter the number\n");
    scanf("%d%d", &num, &rum);
    printf(" %d ", comb(num, rum));
    return 0;
}
int fact(int k)
{
    int i;
    int factorial = 1;
    for (i = 1; i <= k; i++)
        factorial = factorial * i;
    return factorial;
}
int comb(int n, int r)
{
    return fact(n) / (fact(r) * fact(n - r));
}