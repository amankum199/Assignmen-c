/*From the list of IP addresses, check whether all ip addresses are valid.*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
char check(char ip[]);

int main()
{
     char a[10][20];
    int i = 0;
    printf("Enter 10 Email address.\n");
    for (i = 0; i < 10; i++)
    {
        gets(a[i]);
    }
    printf("Valid Email Adress are:\n");
    for (i = 0; i < 10; i++)
    {
        check(a[i]);
    }
    return 0;
}
char check(char ip[20])
{
   
    char *a = strtok(ip, ".");
    while (a != NULL)
    {
        int x = atoi(a);
        if ((x >= 0) && (x <= 255))
        {
            printf("%d ", x);
        }
        a = strtok(NULL, ".");
    }
}