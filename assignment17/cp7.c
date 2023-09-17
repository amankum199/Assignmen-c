/*Write a program in C to count the total number of alphabets, digits and special
characters in a string*/
#include <stdio.h>
#include <string.h>
int main()
{
    int i = 0, alphabets = 0, digits = 0, others = 0;
    char str[100];
    printf("Enter the string.\n");
    gets(str);
     while(str[i]!='\0')
    {
        if((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z'))
        {
            alphabets++;
        }
        else if(str[i]>='0' && str[i]<='9')
        {
            digits++;
        }
        else
        {
            others++;
        }

        i++;
    }
    printf("%d Alphabet\n", alphabets);
    printf("%d Digit\n", digits);
    printf("%d Special Character\n", others);
    return 0;
}