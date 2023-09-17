/*Write a function in C to print all unique elements in an array.*/
#include <stdio.h>
void dup(int b[]);
int main()
{
    int a[10]={12,78,45,3,23,55,55,11,22,58};
    // printf("Enter 10 number\n");
    // for (int i = 0; i <= 9; i++)
    // {
    //     scanf("%d", &a[i]);
    // }
    dup(a);
    return 0;
}

void dup(int b[])
{
    int i, j;
    for (i = 0; i <= 9; i++)
    {
    int count = 0;
        for (j = i + 1; j < 9; j++)
        {
            if (b[i] == b[j])
            {
                count++;
            }
        }

        if (count == 0)
        {
            printf("%d ", b[i]);
        }
    }
    return;
}