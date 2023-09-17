/*Write a program in C to find the sum of rows and columns of a Matrix*/
#include <stdio.h>
int main()
{
    int a[3][3];
    int i, j, sum = 0;
    printf("Enter the matrix:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("Enter the element a%d%d:", i + 1, j + 1);
            scanf("%d", &a[i][j]);
        }
    }
    // printing the matrix
    printf("\nmatrix are: \n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d   ", a[i][j]);
        }
        printf("\n\n");
    }
    for (i = 0; i < 3; i++)
    {
        sum = 0;
        for (j = 0; j < 3; j++)
        {
            sum = sum + a[i][j];
        }
        printf("sum of %dst rows of a matrix are %d\n", i + 1, sum);
    }

    sum = 0;
    for (i = 0; i < 3; i++)
    {
        sum = 0;
        for (j = 0; j < 3; j++)
        {
            sum = sum + a[j][i];
        }
        printf("sum of %dst columns of a matrix are %d\n", i + 1, sum);
    }

    return 0;
}