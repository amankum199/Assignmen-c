/*Write a function to check whether a given string is an alphanumeric string or not.
(Alphanumeric string must contain at least one alphabet and one digit)*/
#include <stdio.h>
void alphan(char[]);
int main()
{
    char b[100];
    printf("Enter the string\n");
    gets(b);
    alphan(b);
    return 0;
}
void alphan(char a[100])
{
    int i=0, alphabets = 0, digits = 0, others = 0;
    while (a[i] != '\0')
    {
        if ((a[i] >= 'a' && a[i] <= 'z') || (a[i] >= 'A' && a[i] <= 'Z'))
        {
            alphabets++;
        }
        else if (a[i] >= '0' && a[i] <= '9')
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
    if (alphabets != 0 && digits !=0)
    {
        printf("Alphanumeric");
    }
    else
    {
         printf("Not Alphanumeric");
    }
}