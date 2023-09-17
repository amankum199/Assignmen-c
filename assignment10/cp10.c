/*. Write a function to print all prime factors of a given number. For example, if the
number is 36 then your result should be 2, 2, 3, 3. (TSRN*/
#include <stdio.h>
int prime(int n);
int main()
{
    int num;
    printf("Enter the number.\n");
    scanf("%d",&num);
    prime(num);
    return 0;
}

int prime(int n)
{
    for (int i = 2; n != 1; i++)
    {
        while (n % i == 0)
        {
            n=n/i;
            printf("%d ", i);
        }
    }
}
