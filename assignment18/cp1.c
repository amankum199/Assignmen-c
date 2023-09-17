/*Write a function to calculate length of the string*/
#include <stdio.h>
#include<string.h>
int calc(char[]);
int main()
{
    char a[100];
    printf("Enter the string.");
    gets(a);
    calc(a);
    return 0;
}
int calc(char s[100])
{
    int i,count=0;
    for(i=0;s[i]!='\0';i++)
    {
        count++;
    }
    printf("Length of the string is %d",count);
    return 0;
}
