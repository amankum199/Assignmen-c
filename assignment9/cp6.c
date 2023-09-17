//Program to check whether a year is a leap year or not. Using switch statement
#include<stdio.h>
int main()
{
    int x;
    printf("Enter the Year.\n");
    scanf("%d",&x);
    switch(x%100==0)
    {
        case 1: switch(x%400==0)
                           {
                            case 0: printf("Leap year."); break;
                            case 1: printf("Not Leap year."); break;
                           }
            break;
        case 0: switch(x%4==0)
                           {
                            case 1: printf("Leap year."); break;
                            case 0: printf("Not Leap year."); break;
                           }
            break;
    }
    return 0;
}
