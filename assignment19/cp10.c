/*Create an authentication system. It should be menu driven*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    int i, flag = 0;
    char a[3][2][20] = {
        {"aman", "199"},
        {"ashish", "420"},
        {"deen", "840"}};
    char username[20];
    char password[20];
    printf("Enter Your Username: ");
    scanf("%s", username);
    printf("Enter password: ");
    scanf("%s", password);
    for (i = 0; i < 3; i++)
    {
        if ((strcmp(a[i][0], username) == 0) && strcmp(a[i][1], password) == 0)
        {
            printf("Login successful....\n");
            flag = 1;
        }
    }
    if (flag == 0)
    {
        printf("Usename or password not matched.");
    }
    return 0;
}