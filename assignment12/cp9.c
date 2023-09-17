/*Write a recursive function to print octal of a given decimal number*/
#include <stdio.h>
void otod(int a);
int main()
{
    int num;
    printf("Enter the number\n");
    scanf("%d", &num);
    otod(num);
    return 0;
}
void otod(int a)
{
        if (a == 0)
        return;
    otod(a / 8);
    printf("%d", a % 8);
}
