/*Write a program in C to find the sum of left diagonals of a matrix.*/
#include<stdio.h>
int main()
{
    int a[3][3];
    int sum,i,j;
    printf("Enter the matrix:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("Enter the element a%d%d: ",i+1,j+1);
            scanf("%d",&a[i][j]);
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
    sum=a[2][0]+a[1][1]+a[0][2];
    printf("Sum of left diagonal element are %d",sum);
    return 0;
}