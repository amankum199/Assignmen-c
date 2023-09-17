/*Write a function to find the next prime number of a given number. (TSRS)*/
#include <stdio.h>
int find(int k);
int main()
{
    int k;
    printf("Enter the  first number\n ");
    scanf("%d", &k);
    find(k);
    return 0;
}
int find(int n)
{

    int i, j, count = 0;
    for (i = n; i > 0; i++)
    {
        count = 0;
        for (j = 1; j <= i; j++)
        {
            if (i % j == 0)
            {
                count++;
            }
        }

        if (count == 2)
        {
            printf("%d \n", i);
            break;
        }
    }
}