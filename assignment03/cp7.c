#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,c,D,f,g;
    printf("Enter the value of a, b and c.\n");
    scanf("%d %d %d",&a, &b,&c);
    printf("a=%d, b=%d, c=%d\n",a,b,c);
    printf("The quadratic equation is  %dx^2+%dx+%d\n",a,b,c);
    f=b*b;
    g=(a*c);
    D=f-(4*g);
    printf("D=%d\n",D);
    if(D<0){
        printf("The roots are imaginary.");
    }else if(D>0){
        printf("The roots are real and distinct");
    }else if(D=0){
        printf("The roots are real and equal");
    }
        getch();
}
