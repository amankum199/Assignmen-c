/*Write a function in C to read n number of values in an array and display it in reverse 
order*/
#include <stdio.h>
int dup(int b[]);
int main()
{
    int a[10];
    printf("Enter 10 number\n");
    for (int i = 0; i <= 9; i++)
    {
        scanf("%d", &a[i]);
    }
    dup(a);
    return 0;
}
int dup(int b[])
{
    for (int i = 9; i >=0; i--)
    {
        printf("%d ",b[i]);
    }
}