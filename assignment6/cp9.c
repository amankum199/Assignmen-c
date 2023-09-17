#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,i,j;
    printf("Enter two numbers.\n");
    scanf("%d %d",&a,&b);
    for(i=1;i<=a*b;i++)
    {
        if((i%a==0)&&(i%b==0))
        {
         break;
        }
    }
    printf("LCM is %d",i);
    j=(a*b)/i;
    printf("\nHCF is %d",j);
    return 0;
}
