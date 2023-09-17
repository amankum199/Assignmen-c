/*Write a program to search a string in the list of strings*/
#include <stdio.h>
#include <string.h>
int main()
{
    char a[10][20], b[20];
    int i, j;
    printf("Enter 10 strings.\n");
    for (i = 0; i < 10; i++)
    {
        gets(a[i]);
    }
    printf("Enter the strings that you want to search.\n");
    scanf("%s", b);
    for (i = 0; i < 10; i++)
    {
        if (strcmp(a[i], b) == 0)
        {
            printf("String Found.");
            break;
        }
    }
    return 0;
}