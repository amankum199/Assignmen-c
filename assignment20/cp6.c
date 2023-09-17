/*Write a program to calculate the length of the string using a pointer*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char a[10], *p, b[10], *q;
    p = a;
    q = b;
    printf("Enter two strings\n");
    scanf("%s %s", p, q);

    printf("length of %s is %d\n", p, strlen(p));
    printf("length of %s is %d", q, strlen(q));

    return 0;
}
