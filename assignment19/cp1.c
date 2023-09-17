/*Write a program to find the number of vowels in each of the 5 strings stored in two
dimensional arrays, taken from the user*/
#include <stdio.h>
#include <string.h>
int main()
{
    char a[5][20];
    int i,j, vowel=0;
    printf("Enter 5 strings.\n");
    for (int i = 0; i < 5; i++)
    {
        gets(a[i]);
    }
    for(i=0;i<5;i++)
    {
        for(j=0;a[i][j]!='\0';j++)
        {
            if(a[i][j]=='a'||a[i][j]=='e'||a[i][j]=='i'||a[i][j]=='o'||a[i][j]=='u')
            {
                vowel++;
            }
        }
        printf("%d vowel in %s\n",vowel,a[i]);
        vowel=0;
    }
    return 0;
}