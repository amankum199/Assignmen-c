/*Write a function to calculate simple interest. (TSRS)*/
#include<stdio.h>
int simpleIntrest(float,float,float);
int main()
{
    float p,r,t,Si;
    printf("Enter the principle Amount ,rate and Intrest\n");
    scanf("%f %f %f",&p,&r,&t);
    Si=simpleIntrest(p,r,t);
    printf("Simple Intrest is %.2f",Si);
    return 0;

}
int simpleIntrest(float p,float r, float t)
{
  float si=(p*r*t)/100;
  return si;
}