/*Write a function to print all Prime numbers between two given numbers. (TSRN)*/
#include<stdio.h>
int main()
{ 
    int k,value;
    printf("Enter the  first number\n ");
    scanf("%d", &k);
    printf("Enter the last number\n ");
    scanf("%d", &value);
    find(k,value);
}
int find(int k, int value)
{
    int count;
    for ( int num = k; num <= value; num++)
    {
        count = 0;
        for (int i = 2; i <= num / 2; i++)
        {
            if (num % i == 0)
            {
                count++;
                break;
            }
        }
        if (count == 0 && num != 1)
        {
            printf("%d \n", num);
        }
    }
    return 0;
}