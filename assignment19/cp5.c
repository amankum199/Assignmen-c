/*Suppose we have a list of email addresses, check whether all email addresses have
‘@’ in it. Print the odd email out*/
#include <stdio.h>
#include <string.h>
int main()
{
    char a[10][20];
    int i = 0;
    printf("Enter 10 Email address.\n");
    for (i = 0; i < 10; i++)
    {
        gets(a[i]);
    }
    printf("Valid email address are.\n");
    for (i = 0; i < 10; i++)
    {
        if (strchr(a[i], '@') != 0)
        {
            printf("%s\n", a[i]);
        }
    }
    return 0;
}