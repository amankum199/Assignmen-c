#include<stdio.h>
#include<conio.h>
int main()
{
    int a;
    printf("Enter the number\n");
    scanf("%d",&a);
    if(a%7==0 || a%3==0)
        printf("%d is divisible by 7 or 3",a);
    else
        printf("Not divisible by  7 or 3.");
    return 0;
}


