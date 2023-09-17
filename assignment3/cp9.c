#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,c;
    printf("Enter the three number\n");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b && a>c)
        printf("%d is greatest",a);
    else if(b>a && b>c)
        printf("%d is greatest",b);
    if(c>a && c>b)
        printf("%d is greatest",c);
    return 0;
}
