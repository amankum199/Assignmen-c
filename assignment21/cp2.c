/*Write a function to take input employee data from the user. [ Refer structure from
question 1 ]*/
#include<stdio.h>
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
    scanf("%d",&e.id);

    printf("Enter salary of employee\n");
    scanf("%f",&e.salary);
    printf("Employee Details...\n");
    printf("Name = %s , Id = %d , Salary = %.1f ",e.name,e.id,e.salary);
    return 0;

}