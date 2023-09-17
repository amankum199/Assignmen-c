/*Write a program to calculate the length of the string. (without using built-in method)*/
#include<stdio.h>
#include<string.h>
int main()
{
    // printf("%d",strlen("hello"));
    int i=0,count=0;
    char str[20]="amandeep";
    for(int i=0;str[i]!='\0';i++)
    {
        count++;
    }
    printf("%d",count);
    // char str[20];
    // printf("Enter the string.");
    // fgets(str,20,stdin);
    // printf("%d",strlen(str)-1);
    return 0;
}