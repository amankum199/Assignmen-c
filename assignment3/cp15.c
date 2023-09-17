#include<stdio.h>
#include<conio.h>
int main()
{
    int a;
    printf("Enter the number\n");
    scanf("%d",&a);
    if(a>0)
        printf("%d is positive",a);
    else if(a<0)
        printf("%d is negative",a);
    if(a==0)
        printf("%d is Zero",a);
    return 0;
}

