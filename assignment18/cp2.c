/*Write a function to reverse a string.*/
#include <stdio.h>
#include <string.h>
int rev(char a[100])
{

    int i = 0, temp=0;
    int j = strlen(a) - 1;
    while (i <= j)
    {
        temp = a[i];
        a[i] = a[j];
        a[j] = temp;
        i++;
        j--;
    }
    printf("Reverse is %s", a);
    return 0;
}
int main()
{
    char b[100];
    printf("Enter the string\n");
    gets(b);
    rev(b);
    return 0;
}