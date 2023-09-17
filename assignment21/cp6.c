/*Write a function to sort employees according to their names [refer structure from
question 1]*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
struct Employee
{
    int id;
    char name[20];
    float salary;
};
int sort(struct Employee e[10]);
int main()
{
    struct Employee e[10];
    for (int i = 0; i < 10; i++)
    {
        printf("Enter name of employee:%d\n", i + 1);
        scanf("%s", e[i].name);

        printf("Enter Id no. of employee:%d\n", i + 1);
        scanf("%d", &e[i].id);

        printf("Enter salary of employee:%d\n", i + 1);
        scanf("%f", &e[i].salary);
    }
    sort(e);
    return 0;
}
int sort(struct Employee e[10])
{
    struct Employee temp;
    int i = 0;
    int j = 0;
    for (i = 0; i < 9; i++)
    {
        for (j = i + 1; j < 10; j++)
        {
            if (strcmp(e[i].name , e[j].name) > 0)
            {
                temp = e[i];
                e[i] = e[j];
                e[j] = temp;
            }
        }
    }
    for (i = 0; i < 10; i++)
    {
        printf("Name= %s, Id= %d, Salary= %d\n", e[i].name, e[i].id, e[i].salary);
    }
}