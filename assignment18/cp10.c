/*Write a function to find the repeated character in a given string*/
#include <stdio.h>
#include <string.h>
int main()
{
    char a[25] = "amandeepandabhishek";
    int freq[150] = {0};
    int i = 0;
    while (a[i] != '\0')
    {
        freq[a[i]]++;
        i++;
    }
    for (i = 0; i < 150; i++)
    {
        if (freq[i] >= 2)
            printf("%c==>%d\n", i, freq[i]);
    }
    return 0;
}