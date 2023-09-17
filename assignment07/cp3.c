#include<stdio.h>
#include<conio.h>
int main()
{
    int a=0,b=1,c,num,next;
    printf("Enter any number:\n");
    scanf("%d",&num);
    if((num==0)||(num==1)){
        printf("%d is a fibonacci term.",num);
        }
        else
        {
            c=a+b;
            while(c<num)
            {
                a=b;
                b=c;
                c=a+b;
            }
            if(c==num){
            printf("\n%d is a Fibonacci term",num);
            }else{
            printf("%d is not a Fibonacci term",num);
            }
        }
        return 0;
}
