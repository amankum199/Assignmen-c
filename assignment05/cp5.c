#include<stdio.h>
#include<conio.h>
int main()
{
    int a;
    printf("Enter the number \n");
    scanf("%d",&a);
    while(a>=1)
    {
        printf("\n%d\n",((2*a)/2)-1);
        a--;
    }
}




