/*Write a program in C to copy one string to another string*/
#include<stdio.h>
#include<string.h>
int main()
{
    char str1[20];
    char str2[20];
    printf("Enter the string.\n");
    fgets(str1,20,stdin);
    strcpy(str2,str1);
    printf("Copy of one string to another string: %s",str2);
    return 0;
}