/*Write a function in C to count a total number of duplicate elements in an array.*/
#include <stdio.h>
int dup(int b[]);
int main()
{
    int a[10];
    printf("Enter 10 number\n");
    for (int i = 0; i <= 9; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("No of duplicate element is %d ", dup(a));
    return 0;
}

int dup(int b[])
{
    int i, j;
    int count = 0;
    for (i = 0; i < 9; i++)
    {
        for (j = i+1; j <= 9; j++)
        {
            if (b[i] == b[j])
            {
                count++;
            }
        }
    }
    return count;
}