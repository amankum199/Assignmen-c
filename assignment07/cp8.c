//Write a program to find next Prime number of a given number
#include <stdio.h>
int main()
{
    int i, j,n,count=0;
    printf("Enter the number\n ");
    scanf("%d",&n);
    for (i = n; i >0; i++)
    {
        count=0;
        for (j= 1; j<=i; j++)
        {
            if (i % j == 0){
                count++;
            }
        }

        if (count == 2){
            printf("%d \n", i);
            break;
        }
    }
    return 0;
}
