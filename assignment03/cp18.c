#include<stdio.h>
#include<conio.h>
int main()
{
    int m;
    printf("Enter the month.\n");
    scanf("%d",&m);
        if(m==1||m==3||m==5||m==7||m==8||m==10||m==12)
        printf("31 days in this month.");
        else if(m==4||m==6||m==9||m==11)
        printf("30 days in this month.");
        else if(m==2)
        printf("28 days or 29 days in this month.");
        else
        printf("Invalid month");
        return 0;


}
