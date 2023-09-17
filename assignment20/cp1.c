/*Write a function to swap values of two in variables of calling function. (TSRS*/
#include <stdio.h>
#include <string.h>
#include <stdio.h>
int swap(int *, int *);
int main()
{
    int a, b;
    printf("Enter the number.\n");
    scanf("%d %d", &a, &b);
    swap(&a, &b);
    printf("%d %d", a, b);
    return 0;
}
int swap(int *p, int *q)
{
    int t;
    t = *p;
    *p = *q;
    *q = t;
}