/*Write a function to transform string into uppercase*/
#include <stdio.h>
#include <string.h>
int uppr(char a[100])
{
    int i = 0;
    for(i=0;a[i]!='\0';i++)
    {
        if ('a' <= a[i] <= 'z')
        {
            a[i] = a[i] - 32;
        }
    }
    printf("Uppercase of string is %s", a);
    return 0;
}
int main()
{
    char b[100];
    printf("Enter the string\n");
    gets(b);
    uppr(b);
    return 0;
}