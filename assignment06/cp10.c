#include<stdio.h>
#include<conio.h>
int main()
{
    int n,i,rem,reverse=0;
    printf("Enter a number\n");
    scanf("%d",&n);
    while(n!=0)
    {
        rem=n%10;
        n=n/10;
        reverse=reverse*10+rem;
    }
    printf("Reversed number = %d",reverse);
    return 0;
}
