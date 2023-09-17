/*Write a program to calculate the product of two matrices each of order 3x3*/
#include <stdio.h>
int main()
{
    int a[3][3];
    int b[3][3];
    int c[3][3];
    int i, j, k, sum = 0;
    printf("\nEnter elements of 1st matrix:\n");
    for (i = 0; i < 3; ++i)
        for (j = 0; j < 3; ++j)
        {
            printf("Enter element a%d%d: ", i + 1, j + 1);
            scanf("%d", &a[i][j]);
        }

    printf("Enter elements of 2nd matrix:\n");
    for (i = 0; i < 3; ++i)
        for (j = 0; j < 3; ++j)
        {
            printf("Enter element b%d%d: ", i + 1, j + 1);
            scanf("%d", &b[i][j]);
        }
    // multiply two matrices
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 3; k++)
            {
                sum = sum + a[i][k] * b[k][j];
            }
            c[i][j]= sum;
            sum=0;
        }
    }

    // printing the result
    printf("\nProduct of two matrices: \n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d   ", c[i][j]);
        }
        printf("\n\n");
    }
    return 0;
}