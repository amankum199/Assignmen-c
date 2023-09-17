/*Write a recursive function to print squares of first N natural numbers*/
#include <stdio.h>
void evenat(int a);
int main()
{
    int num;
    printf("Enter the number\n");
    scanf("%d", &num);
    evenat(num);
    return 0;
}
void evenat(int a)
{
    if (a == 0)
        return;
    evenat(a - 1);
    printf("%d ", ((a*a)));
}