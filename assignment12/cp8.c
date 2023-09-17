/*Write a recursive function to print binary of a given decimal number*/
#include <stdio.h>
void dtob(int a);
int main()
{
    int num;
    printf("Enter the number\n");
    scanf("%d", &num);
    dtob(num);
    return 0;
}
void dtob(int a)
{
    if (a > 0)
    {
        dtob(a / 2);
            printf("%d ", a % 2);
    }
}