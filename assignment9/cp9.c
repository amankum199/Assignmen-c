/* Program to Convert even number into its upper nearest odd number
Switch Statement.*/
#include<stdio.h>
int main()
{
    int x;
     printf("Enter the number.\n");
     scanf("%d",&x);
     switch(x%2==0)
     {
         case 1:printf("%d",x+1);
         break;
         case 0:printf("%d",x);
         break;
     }
     return 0;

}
