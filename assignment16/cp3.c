/*Write a program in C to find the transpose of a given matrix.*/
#include <stdio.h>
int main()
{
    int a[3][3];
    int b[3][3];
    int i, j;
    printf("\nEnter elements of the matrix:\n");
    for (i = 0; i < 3; ++i)
        for (j = 0; j < 3; ++j)
        {
            printf("Enter element a%d%d: ", i + 1, j + 1);
            scanf("%d", &a[i][j]);
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
        for (j = 0; j < 3; j++)
        {
            b[i][j] = a[j][i];
        }
    }

    // printing the result
    printf("\ntranpose of the matrices: \n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d   ", b[i][j]);
        }
        printf("\n\n");
    }
    return 0;
}