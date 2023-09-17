/*Write a program in C to print or display the lower triangular of a given matrix.*/
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
        for (j = 0; j < 3; j++)
        {
            if(j>i)
            a[i][j]=0;
        }
    }
     printf("\n lower traingular matrix are: \n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d   ", a[i][j]);
        }
        printf("\n\n");
    }
    return 0;
}