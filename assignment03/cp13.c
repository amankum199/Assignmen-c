#include<stdio.h>
#include<conio.h>
int main()
{
    int a;
    printf("Enter the number\n");
    scanf("%d",&a);
    if(a%3==0 && a%2==0)
        printf("%d is divisible by 3 and 2",a);
    else
        printf("Not divisible by 3 and 2.");
    return 0;
}

