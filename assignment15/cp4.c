/*Write a function to rotate an array by n position in d direction. The d is an indicative
value for left or right. (For example, if array of size 5 is [32, 29, 40, 12, 70]; n is 2 and
d is left, then the resulting array after left rotation 2 times is [40, 12, 70, 32, 29] )*/
#include <stdio.h>
int rotate(int b[], int d);
int main()
{
    int a[10], d=2;
    printf("Enter the number in array\n");
    for (int i=0; i <= 9; i++)
    {
        scanf("%d", &a[i]);
    }
    rotate(a, d);
}
int rotate(int b[], int d)
{
    int temp, i;
    while (d != 0)
    {
        temp = b[9];
        for (i = 9; i > 0; i--)
        {
            b[i] = b[i - 1];
        }
        b[0] = temp;
        d--;
    }
    for (i = 0; i <= 9; i++)
    {
        printf("%d ", b[i]);
    }
    return 0;
}