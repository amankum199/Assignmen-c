/*Write a function to print first N terms of Fibonacci series (TSRN)*/
#include<stdio.h>
int nfib(int n);
int main()
{
    int num;
    printf("Enter the value of number\n");
    scanf("%d",&num);
    printf("First %d FIBONACCI numbers are....\n", nfib(num));
    return 0;
}
int nfib(int n)
{
    int fib1=0,fib2=1,fib3,count=0;
   for(count=0; count<n; count++)
    {
        fib3=fib1 + fib2;
        printf("%d\n",fib3);
        fib1=fib2;
        fib2=fib3;
    }
}
