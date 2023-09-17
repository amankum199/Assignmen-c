/*Write a function to print first N natural numbers (TSRN)*/
#include <stdio.h>
int natural(int);
int main()
{
    int num;
    printf("Enter the number\n");
    scanf("%d", &num);
    natural(num);
    return 0;
}
int natural(int x)
{
    for (int i = 1; i <= x; i++)
        printf("%d ", i);
}