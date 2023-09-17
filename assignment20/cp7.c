/*Write a program to count the number of vowels and consonants in a string using a
pointer.*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    int i, vowel = 0, constant = 0;
    char w1[50];
    char *w = w1;
    printf("Enter the string.\n");
    scanf("%s", w1);
    for (i = 0; w[i] != '\0'; i++)
    {
        if (w[i] == 'a' || w[i] == 'e' || w[i] == 'i' || w[i] == 'o' || w[i] == 'u')
        {
            vowel++;
        }
        else
        {
            constant++;
        }
    }
    printf("%d vowel in %s\n", vowel,w);
    printf("%d constant in %s\n", constant,w);
    return 0;
}