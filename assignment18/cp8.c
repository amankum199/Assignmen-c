/*Write a function to count words in a given strin*/
#include <stdio.h>
#include <string.h>
int cot(char[]);
int main()
{
    char a[500];
    printf("Entr the string.\n");
    gets(a);
    cot(a);
    return 0;
}
int cot(char b[500])
{
    int i = 0, count = 1;
    while (b[i] != '\0')
    {
        if (b[i] == ' ' && b[i + 1] != ' ')
        {
            count++;
        }
        i++;
    }
    printf("%d words",count);
}
