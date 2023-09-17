/*Write a program to enter the marks of 5 students in Chemistry, Mathematics and
Physics (each out of 100) using a structure named Marks having elements roll no.,
name, chem_marks, maths_marks and phy_marks and then display the percentage
of each student*/
#include <stdio.h>
struct students
{
    char name[50];
    int roll;
    float chem;
    float math;
    float phy;
};
int main()
{
    struct students student[5];
    
    for (int i = 0; i < 5; i++)
    {
        printf("Enter name of Student:%d\n", i + 1);
        scanf("%s", student[i].name);
        printf("Enter Roll no:\n");
        scanf("%d", &student[i].roll);
        printf("Enter marrks in Chemestry:\n");
        scanf("%f", &student[i].chem);
        printf("Enter marks in mathematics:\n");
        scanf("%f", &student[i].math);
        printf("Enter marks in Physics:\n");
        scanf("%f", &student[i].phy);
    }
    for (int i = 0; i < 5; i++)
    {
        printf("Student%d:\n", i + 1);
        float percentage = (student[i].chem + student[i].math + student[i].phy) / 300.0*100;
        printf("Percentage : %.1f\n", percentage);
    }
    return 0;
}