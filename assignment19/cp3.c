/*Write a program to read and display a 2D array of strings in C language.*/
#include <stdio.h>
#include <string.h>
int main()
{
    char a[10][20], t[20];
    int i, j;
    printf("Enter 10 strings.\n");
    for (int i = 0; i < 10; i++)
    {
        gets(a[i]);
    }
    printf("Strings are:\n");
    for (i = 0; i < 10; i++)
    {
        printf("%s\n", a[i]);
    }
    return 0;
}