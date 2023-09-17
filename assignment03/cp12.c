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
        printf("Not a character.");
    return 0;
}
