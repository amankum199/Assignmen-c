#include<stdio.h>
#include<conio.h>
int main()

{
    int a;
    float b, pi=3.14;
    printf("Enter the radius of the circle.\n");
    scanf("%d",&a);
    b=pi*a*a;
    printf("Area of the circle is %.2f having the radius %d.",b,a);
    getch();
}

