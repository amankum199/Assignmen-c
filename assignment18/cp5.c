/*Write a function to transform a string into lowercase*/
#include <stdio.h>
#include <string.h>
int lowr(char a[100])
{
    int i = 0;
    for(i=0;a[i]!='\0';i++)
    {
        if ('A' <= a[i] <= 'Z')
        {
            a[i] = a[i] + 32;
        }
    }
    printf("Lowercase of string is %s", a);
    return 0;
}
int main()
{
    char b[100];
    printf("Enter the string\n");
    gets(b);
    lowr(b);
    return 0;
}