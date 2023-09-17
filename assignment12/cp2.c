/*2. Write a recursive function to print first N natural numbers in reverse order*/
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
    printf("%d ", n);
    natural(n-1);
}