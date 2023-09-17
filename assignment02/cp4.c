#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b;
    printf("Enter the number\n");
    scanf("%d%d",&a,&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("The value of a and b is %d  %d",a,b);
    return 0;
}
