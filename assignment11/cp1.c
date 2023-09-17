/*Write a function to calculate LCM of two numbers. (TSRS)*/
#include <stdio.h>

int lcm(int n1, int n2);
int main()
{
    int a, b;
    printf("Enter two positive integers: ");
    scanf("%d %d", &a, &b);
    lcm(a,b);
    return 0;
}
int lcm(int n1, int n2)
{
    int max;
    // maximum number between n1 and n2 is stored in max
    max = (n1 > n2) ? n1 : n2;

    while (1)
    {
        if ((max % n1 == 0) && (max % n2 == 0))
        {
            printf("The LCM of %d and %d is %d.", n1, n2, max);
            break;
        }
        ++max;
    }
}