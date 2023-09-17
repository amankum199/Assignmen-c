/*Write a program to convert a given string into uppercase*/
#include<stdio.h>
#include<string.h>
int main()
{
    char str[20];
    printf("Enter the string.\n");
    fgets(str,20,stdin);
    printf("Uppercase of the string are:%s",strupr(str));
    return 0;
}