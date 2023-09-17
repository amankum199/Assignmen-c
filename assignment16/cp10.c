/*Write a program in C to find the row with maximum number of 1s*/
#include <stdio.h>
int main()
{
    int a[3][3];
    int i, j, sum = 0, max = 0, index = 0;
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
        sum = 0;
        for (j = 0; j < 3; j++)
        {
            if (a[i][j] == 1)
                sum = sum + a[i][j];
        }
        if (sum > max)
        {
            max = sum;
            index = i;
        }
    }
        printf("Index of maximum number of 1 in arow  is %d",index+1);
       
    return 0;
}