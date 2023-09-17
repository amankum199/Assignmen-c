/*Write a program in C to copy the elements of one array into another array.Take array
values from the user*/
#include <stdio.h>
int main()
{
    int a[10], b[10];
    printf("Enter the number\n");
    for (int i = 0; i <= 9; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Copy of the number\n");
    for (int i = 0; i <= 9; i++)
    {
        b[i]=a[i];
        printf("%d\n", b[i]);
    }

    // for (int i = 0; i <= 9; i++)
    // {
    // }
    return 0;
}