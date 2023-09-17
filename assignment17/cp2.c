/*Write a program to count the occurrence of a given character in a given string.*/
#include<stdio.h>
#include<string.h>
int main()
{
    int i=0,count=0;
    char check;
    char str[100];
    printf("Enter the string.\n");
    fgets(str,100,stdin);
    printf("Enter the character that you want to check.\n");
    scanf("%c",&check);

    for(int i=0;str[i];i++)
    {
        if(str[i]==check)
        count++;
    }
    printf("%c occurs %d times",check,count);
    return 0;
}