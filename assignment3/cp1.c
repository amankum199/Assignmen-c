#include<stdio.h>
#include<conio.h>
int main()
{
    int a;
    printf("Enter a number\n");
    scanf("%d",&a);
    if(a>=0){
        printf("positive number");
    }else{
        printf("negative number");
    }
    return 0;
}
