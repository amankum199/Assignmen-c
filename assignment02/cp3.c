#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,c;
    printf("Enter the number\n");
    scanf("%d%d",&a,&b);
    c=a;
    a=b;
    b=c;
    printf("The value of a and b is %d  %d",a,b);
    return 0;
}
