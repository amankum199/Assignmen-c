/*Write a program to store information of 10 students and display them using structure*/
#include <stdio.h>
struct student
{
    char name[20];
    int reg;
    int roll;
};
int main()
{
    struct student list[10];
    for (int i = 0; i < 10; i++)
    {
        printf("Enter name of Student:%d\n", i + 1);
        scanf("%s", list[i].name);

        printf("Enter Registration no:\n");
        scanf("%d", &list[i].reg);

        printf("Enter Roll no:\n");
        scanf("%d", &list[i].roll);
    }
    for (int i = 0; i < 10; i++)
    {
        printf("%d Name: %s , Reg-no: %d , Roll no: %d\n", i + 1, list[i].name, list[i].reg, list[i].roll);
    }
    return 0;
}