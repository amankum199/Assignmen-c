
#include<stdio.h>
#include<conio.h>
int main()
{
    int math,sci,social,hindi,eng,total;
    printf("***********Merit calculator************\n\n");
    printf("Enter your marks in Mathematics.\n");
    scanf("%d",&math);
    printf("Enter your marks in Science.\n");
    scanf("%d",&sci);
    printf("Enter your marks in Social Science.\n");
    scanf("%d",&social);
    printf("Enter your marks in Hindi.\n");
    scanf("%d",&hindi);
    printf("Enter your marks in English.\n");
    scanf("%d",&eng);
    total=math+sci+social+hindi+eng;
    printf("your total marks = %d\n",total);
    if(total>=165)
        printf("Passed");
    else
        printf("Failed");
    return 0;

}
