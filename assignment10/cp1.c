/*Write a function to calculate the area of a circle. (TSRS)*/
#include<stdio.h>
int area(float);
int main()
{
    float x,A;
    printf("Enter the radius of circle\n");
    scanf("%f",&x);
    A=area(x);
    printf("Area of the circle is %.2f",A);
    return 0;
}
int area(float r)
{
    float ar;
    ar=3.14*r*r;
    return ar;
}
