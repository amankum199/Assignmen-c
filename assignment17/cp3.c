/*Write a program to count vowels in a given string*/
#include<stdio.h>
#include<string.h>
int main()
{
    int i=0,count=0;
    char str[100];
    printf("Enter the string.\n");
    fgets(str,100,stdin);
    for(int i=0;str[i];i++)
    {
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
        count++;
    }
    printf("Numbers of vowel in given strings are: %d",count);
    return 0;
}