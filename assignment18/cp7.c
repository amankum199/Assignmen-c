/*Write a function to check whether a given string is palindrome or not.*/
#include <stdio.h>
#include <string.h>
int palli(char[]);
int main()
{
    char b[100];
    printf("Enter the string\n");
    gets(b);
    palli(b);
    return 0;
}
int palli(char a[100])
{

    int i = 0, temp = 0;
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