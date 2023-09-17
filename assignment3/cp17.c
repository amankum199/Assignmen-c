#include<stdio.h>
#include<conio.h>
int main()
{
    int s1,s2,s3;
    printf("Enter the length of sides of a triangle.\n");
    scanf("%d\n%d\n%d",&s1,&s2,&s3);
    printf("Sides are %d %d %d\n",s1,s2,s3);
    if(s1+s2>s3 || s2+s3>s1 || s3+s1>s2)
        printf("Valid Triangle");
    else
        printf("Invalid Triangle");
}
