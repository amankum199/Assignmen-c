/*Write a program to print the strings which are palindrome in the list of strings.*/
#include <stdio.h>
#include <string.h>
int palli(char[]);
int main()
{
    char a[10][100];
    int i = 0;
    printf("Enter the strings.\n");
    for (i = 0; i < 10; i++)
    {
        gets(a[i]);
    }
     printf("\n\n\n");
    for (i = 0; i < 10; i++)
    {
        printf("%s is ",a[i]);
        palli(a[i]);
        printf("\n");
    }
    return 0;
}
int palli(char a[100])
{

    int i = 0;
    int j = strlen(a) - 1;
    while (i < j)
    {
        if (a[i++] != a[j--])
        {
            printf(" Not palindrome");
            break;
        }
        else
            printf("palindrome");
        return 0;
    }
}