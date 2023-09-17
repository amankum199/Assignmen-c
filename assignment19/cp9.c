/*Write a program that asks the user to enter a username. If the username entered is
one of the names in the list then the user is allowed to calculate the factorial of a
number. Otherwise, an error message is displayed*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int fact();
int main()
{
    int i = 0, count = 0;
    char usernames[10][20]={"aman","ashish","abhishek","subodh","deen","akash","divyanshu","amit","soni","neha"};
    char username[20];
    printf("Enter your Username:\n");
    scanf("%s", username);
    for (i = 0; i < 10; i++)
    {
        if (strcmp(usernames[i], username) == 0)
        {
            count++;
        }
    }
    if (count != 0)
    {
        printf("You are allowed to Calculate the factorial.\n");
        fact();
    }
    else
    {
        printf("Error");
    }
    return 0;
}
int fact()
{
    int n, factorial = 1;
    printf("Enter the number\n");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        factorial = factorial * i;
    }
    printf("Factorial of %d is %d", n, factorial);
    return 0;
}
