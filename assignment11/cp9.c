/*9. Write a program in C to find the square of any number using the function.*/
#include <stdio.h>
int square(int num);
int main()
{
    int n;
    printf("Enter the number\n");
    scanf("%d", &n);
    printf("The square of the given number is %d", square(n));
    return 0;
}
int square(int num)
{
    int sq;
    sq = num * num;
    return sq;
}
