#include<stdio.h>
#include<conio.h>
int main()
{
    char ch;
    printf("Enter any character.\n");
    scanf("%c",&ch);
    if(ch>='A' && ch<='Z')
        printf("%c is Uppercase.",ch);
    else if(ch>='a' && ch<='z')
        printf("%c is Lowercase.",ch);
    else
        printf("A digit or a special character.");
    return 0;
}

