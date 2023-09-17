#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,c=0;
    printf("Enter three digit number\n");
    scanf("%d",&a);
    while(a!=0){
      b=a%10;
      c=c+b;
      a=a/10;
      }
    printf("The sum of the digit are %d",c);
    return 0;
}

