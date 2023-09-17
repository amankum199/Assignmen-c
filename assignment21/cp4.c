/*Write a function to find the highest salary employee from a given array of 10
employees. [ Refer structure from question 1]*/
#include <stdio.h>
struct Employee
{
    int id;
    char name[20];
    float salary;
};

int main()
{
    struct Employee e[10];
    for (int i = 0; i < 10; i++)
    {
        printf("Enter name of employee:%d\n", i + 1);
        fflush(stdin);
        fgets(e[i].name, 20, stdin);

        printf("Enter Id no. of employee:%d\n", i + 1);
        scanf("%d", &e[i].id);

        printf("Enter salary of employee:%d\n", i + 1);
        scanf("%f", &e[i].salary);
    }
    printf("Employee Details...\n");
    for (int i = 0; i < 10; i++)
    {
        printf("Name = %s , Id = %d , Salary = %.1f \n\n", e[i].name, e[i].id, e[i].salary);
    }
    return 0;
}