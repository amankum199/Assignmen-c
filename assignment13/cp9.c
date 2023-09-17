/*Write a program in C to count the digits of a given number using recursion*/
#include<stdio.h>
int digit(int n);
int main()
{
    int a;
    printf("Enter the number\n");
    scanf("%d",&a);
    printf("%d",digit(a));

}
int digit(int n)
{
 static int count=0;
    if(n>0)
    {
        count++;
        digit(n/10);
    }
    else 
    return count;

}