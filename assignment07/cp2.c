#include <stdio.h>
int main()
{
    int fib1 = 0, fib2 = 1, fib3, num, count = 0;
    printf("Enter the value of number\n");
    scanf("%d", &num);
    printf("First %d FIBONACCI numbers are....\n", num);
    for (count = 0; count < num; count++)
    {
        fib3 = fib1 + fib2;
        printf("%d\n", fib3);
        fib1 = fib2;
        fib2 = fib3;
    }
}
