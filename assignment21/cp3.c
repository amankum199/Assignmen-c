/*Write a function to display employee data. [ Refer structure from question 1 ]*/
#include<stdio.h>
struct Employee
{
    int id;
    char name[20];
    float salary;
};
void display(struct Employee e);
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
    display(e);
    return 0;
}
void display(struct Employee e)
{
    printf("Name = %s , Id = %d , Salary = %.1f ",e.name,e.id,e.salary);

}