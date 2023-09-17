#include<stdio.h>
#include<conio.h>
int main()
{
    int a;
    printf("Enter a number\n");
    scanf("%d",&a);
    if(a & 1)
        printf("Odd number");
        else
        printf("Even number");
        return 0;
}
