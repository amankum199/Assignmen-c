#include<stdio.h>
#include<conio.h>
int main()
{
    double a,b,d,e,f;
    printf("*** INCOME CALCULATOR ***\n");
    printf("Enter cost price. \n");
    scanf("%lf",&a);
    printf("Enter selling price.\n");
    scanf("%lf",&b);

    if(b>a){
            d=b-a;
            e=((d* 100)/a);
        printf("Profit percentage: %lf\n",e);
    }
    if(a>b){
            d=a-b;
            e=((d* 100)/a);
        printf("Loss percentage: %lf\n",e);
    }
    if(a==b){
        printf("No profit No loss.");
        }
    return 0;

}
