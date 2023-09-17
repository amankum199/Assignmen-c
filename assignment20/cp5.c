/*Write a program to find the maximum number between two numbers using a pointer*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int a, *p, b, *q;
    p = &a;
    q = &b;
    printf("Enter two number\n");
    scanf("%d %d", p, q);
    if (*p > *q)
    {
        printf("Maximum number is %d", *p);
    }
    else
    {
        printf("Maximum number is %d", *q);
    }
    return 0;
}
