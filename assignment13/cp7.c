/*Write a recursive function to calculate HCF of two numbers*/
#include <stdio.h>
int hcf(int m, int n);
int main()
{
    int a, b;
    printf("Enter the number\n");
    scanf("%d%d", &a, &b);
    printf("HCF of %d and %d is %d", a,b, hcf(b, a%b));
    return 0;
}
int hcf(int m, int n)
{
    if (n==0)
        return m;
        hcf(n,m%n);

}