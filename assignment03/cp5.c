#include<stdio.h>
#include<conio.h>
int main()
{
    int a;
    printf("Enter a number.\n");
    scanf("%d", &a);
    if(a>=100 && a<=999)
        printf("%d is a three digit number.",a);
    else
        printf("%d is not a three digit number.",a);
    getch();

}
