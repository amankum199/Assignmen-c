/*Write a function to check whether a given number is Prime or not. (TSRS)*/
#include <stdio.h>
int check(int n);
int main()
{
    int num;
    printf("Enter the nuber\n");
    scanf("%d", &num);
    check(num);
    return 0;
}
int check(int n)
{

    int i, flag = 0;

    // 0 and 1 are not prime numbers
    // change flag to 1 for non-prime number
    if (n == 0 || n == 1)
        flag = 1;

    for (i = 2; i <= n / 2; ++i)
    {

        // if n is divisible by i, then n is not prime
        // change flag to 1 for non-prime number
        if (n % i == 0)
        {
            flag = 1;
            break;
        }
    }

    // flag is 0 for prime numbers
    if (flag == 0)
        printf("%d is a prime number.", n);
    else
        printf("%d is not a prime number.", n);

    return 0;
}
