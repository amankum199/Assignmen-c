#include<stdio.h>
int main()
{
    int i,n,k,sum=0;
    printf("Enter the number\n");
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        k=i*i;
        printf(" %d \n",k);
        sum= sum+k;
    }
    printf("\nThe sum of squares of natural number from 1 to %d = %d",n,sum);
}
