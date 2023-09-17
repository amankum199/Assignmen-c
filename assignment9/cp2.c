/*Write a menu driven program with the following options:
a. Addition
b. Subtraction
c. Multiplication
d. Division
e. Exit*/
#include<stdio.h>
int main()
{
    int x,a,b,c;
    printf("Enter your choice\n1 For addition\n2 For subtraction\n3 For multiplication\n4 For division\nAny key for exit\n");
     scanf("%d",&x);
     switch(x)
     {
    case 1:
    printf("Addition\nEnter two number\n");
    scanf("%d\%d",&a,&b);
    c=a+b;
    printf("Sum of  %d and %d is %d",a,b,c);
    break;
     case 2:
    printf("Subtraction\nEnter two number\n");
    scanf("%d\%d",&a,&b);
    c=a-b;
    printf("Difference of  %d and %d is %d",a,b,c);
    break;
     case 3:
    printf("Multiplication\nEnter two number\n");
    scanf("%d\%d",&a,&b);
    c=a*b;
    printf("Product of  %d and %d is %d",a,b,c);
    break;
     case 4:
    printf("Division\nEnter two number\n");
    scanf("%d\%d",&a,&b);
    c=a/b;
    printf("After dividing  %d by %d the quotient is %d",a,b,c);
    break;
    default :
    printf("Invalid Input\nExiting.....");
}
return 0;
}
