/*Write a program to convert a given string into lowercase*/
#include<stdio.h>
#include<string.h>
int main()
{
    char str[20];
    printf("Enter the string.\n");
    fgets(str,20,stdin);
    printf("Lowercase of the string are:%s",strlwr(str));
    return 0;
}