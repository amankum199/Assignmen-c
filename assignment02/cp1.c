#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b;
    printf("Enter the number\n");
    scanf("%d",&a);
    b=a%10;
    printf("Unit digit of a number is %d",b);
    return 0;
}
