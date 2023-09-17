#include<stdio.h>
#include<conio.h>
int main()
{
    int a, b;
    printf("Enter two number\n");
    scanf("%d%d",&a,&b);
    if (a==b)
        printf("Both are Same");
    else if(a>b)
        printf("%d is greater than %d",a,b);
    else if(b>a)
        printf("%d is greater than %d",b,a);
    return 0;
    }
