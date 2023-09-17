#include<stdio.h>
#include<conio.h>
int main()
{
    int  i,n,sum=0;
    printf("Enter the number\n");
    scanf("%d",&n);
    for( i=1;i<=n;i++){

         if(i%2==0)
        {
            printf(" %d ",i);
            sum =sum + i;
        }
    }
         printf("\nSum of even natural number from 1 to %d = %d",n,sum);

        return 0;

}

