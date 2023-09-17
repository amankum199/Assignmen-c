/*Write a program to sort elements of an array of size 10. Take array values from the
user*/
#include <stdio.h>
int main()
{
    int a[10], temp;
    printf("Enter 10 number\n");
    for (int i = 0; i <= 9; i++)
    {
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < 9; i++)
    {
        for (int j = i + 1; j < 10; j++)
        {
            if (a[i] > a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}