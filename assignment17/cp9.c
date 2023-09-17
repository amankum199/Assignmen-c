/*Write a C program to sort a string array in ascending order*/
#include <stdio.h>
#include <string.h>
int main()
{
    char str[10], temp;
    int i;
    printf("Enter the String.\n");
    gets(str);
    for (int i = 0; i < 9; i++)
    {
        for (int j = i + 1; j < 10; j++)
        {
            if (str[i] > str[j])
            {
                temp = str[i];
                str[i] = str[j];
                str[j] = temp;
            }
        }
    }
    for (int i = 0; i < 10; i++)
    {
        printf("%c ", str[i]);
    }
    return 0;
}