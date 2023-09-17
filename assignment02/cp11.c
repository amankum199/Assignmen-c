#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,c;
    printf("Enter a number:\n");
    scanf("%d",&a);
    printf("Enter a digit:\n");
    scanf("%d",&b);
    c=a*10+b;
    printf("The new number is %d",c);
    return 0;
}
