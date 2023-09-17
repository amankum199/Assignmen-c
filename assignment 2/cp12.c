#include<stdio.h>
#include<conio.h>
int main()
{
    int a;
    float b;
    printf("Enter the amount in INR\n",a);
    scanf("%d",&a);
    b=a/76.23;
    printf("INR %d = %.2f USD",a,b);
    return 0;
}
