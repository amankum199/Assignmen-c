/*. Write a recursive function to print first N natural numbers*/
#include <stdio.h>
void natural(int n);
int main()
{
    int num;
    printf("Enter the number\n");
    scanf("%d", &num);
    natural(num);
    return 0;
}
void natural(int n)
{
    if (n == 0)
        return;
    natural(n-1);
    printf("%d ", n);
}