/*Write a function to sort an array of any size. (TSRS)*/
#include <stdio.h>
int shorts(int b[]);
int main()
{
    int a[10]={12,78,45,67,23,33,55,11,22,58};
    /*printf("Enter 10 number\n");
    for (int i = 0; i <= 9; i++)
    {
        scanf("%d", &a[i]);
    }
    */
    shorts(a);
    return 0;
}
int shorts(int b[])
{
    int temp;
    for (int i = 0; i < 9; i++)
    {
        for (int j = i + 1; j < 10; j++)
        {
            if (b[i] > b[j])
            {
                temp = b[i];
                b[i] = b[j];
                b[j] = temp;
            }
        }
    }
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", b[i]);
    }
    return 0;
}