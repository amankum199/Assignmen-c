/*Write a program to reverse a string.*/
#include<stdio.h>
#include<string.h>
int main()
{
    char str[20];
    printf("Enter the string.\n");
    fgets(str,20,stdin);
    printf("Reverse of the string is: %s",strrev(str));
    return 0;
}