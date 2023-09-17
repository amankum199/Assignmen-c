#include<stdio.h>
#include<conio.h>
int main()
{
    int a;
    printf("Enter a number\n");
    scanf("%d",&a);
    if(a%5==0){
        printf("Divisible by 5");
    }else{
        printf("Not divisible by 5");
    }
    return 0;
}

