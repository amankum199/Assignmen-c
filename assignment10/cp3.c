/*Write a function to check whether a given number is even or odd. Return 1 if the
number is even, otherwise return 0. (TSRS)*/
#include<stdio.h>
int funct(int);
int main()
{
    int a,y;
    printf("Enter the number.\n");
    scanf("%d",&a);
    y=funct(a);
    printf("%d",y);
    return 0;
}
int funct(int x)
{
    if(x%2==0)
        return 1;
    else
        return 0;
}
