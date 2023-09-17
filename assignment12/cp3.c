/*Write a recursive function to print first N odd natural numbers*/
#include <stdio.h>
void oddnatural(int n);
int main()
{
    int num;
    printf("Enter the number\n");
    scanf("%d", &num);
    oddnatural(num);
    return 0;
}
void oddnatural(int n)
{
    if (n == 0)
        return;
    oddnatural(n-1);
    printf("%d ", 2*n-1);
}