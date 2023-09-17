/*Define a structure Employee with member variables id, name, salary*/
#include <stdio.h>
struct Employee
{
    int id;
    char name[20];
    float salary;
};
int main()
{
    struct Employee e;
    printf("Enter name of employee\n");
    gets(e.name);
    printf("Enter Id no.\n");
    scanf("%d", &e.id);
    printf("Enter salary of employee\n");
    scanf("%f", &e.salary);
    printf("Employee Details...\n");
    printf("Name = %s , Id = %d , Salary = %.1f ", e.name, e.id, e.salary);
    return 0;
}