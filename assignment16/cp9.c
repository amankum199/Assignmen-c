/*Write a program in C to accept a matrix and determine whether it is a sparse matrix*/
#include <stdio.h>
int main()
{
    int a[3][3];
    int i, j, count = 0;
    ;
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
        for (j = 0; j < 3; j++)
        {
            if (a[i][j] != 0)
                count++;
        }
    }
    if (count <= 5)
        printf("This is Sparse Matrix");
    else
        printf("This is Dense Matrix");
    return 0;
}