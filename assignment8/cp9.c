#include<stdio.h>
int main()
{
    int i,j,count;
    for(i=0;i<=3;i++)
    {
      count=0;
        for(j=i;j<=3;j++)

            printf("%d",++count);

        for(j=i;j<=2;j++)

            printf("%d",--count);

         for(j=0;j<2*i;j++)
        {

                printf(" ");
        }

    printf("\n");
    }
}
