/*Write a recursive function to print reverse of a given number*/
#include <stdio.h>
void rev(int n);
int main()
{
    int a;
    printf("Enter the number ");
    scanf("%d", &a);
    rev(a);
}
void rev(int n)
{

    if(n==0)
    return;
    else
    printf("%d",n%10);
    rev(n/10);

}