/*Write a function to reverse a string word wise. (For example if the given string is
“Mysirg Education Services” then the resulting string should be “Services Education
Mysirg” )*/
#include <stdio.h>
#include <string.h>
void swap(char a[100], int i, int j)
{
    char temp;
    while (i <= j)
    {
        temp = a[i];
        a[i] = a[j];
        a[j] = temp;
        i++;
        j--;
    }
}

int main()
{
    char a[100] = " my name ia aman kumar";
    int i = 0, start = 0, end = 0, flag = 0;
    while (a[i] != '\0')
    {
        while (a[i] != ' ')
        {
            if (a[i] == '\0')
            {
                flag = 1;
                break;
            }
            end++;
            i++;
        }

        swap(a, start, end - 1);
        if (flag == 1)
            break;
        start = end++;
        i++;
    }
    swap(a, 0, i - 1);
    printf("%s", a);
    return 0;
}
