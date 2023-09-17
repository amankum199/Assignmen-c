#include <stdio.h>
int main()
{
    int i, k, num, count, value;
    printf("Enter the  first number\n ");
    scanf("%d", &k);
    printf("Enter the number\n ");
    scanf("%d", &value);
    for (num = k; num <= value; num++)
    {
        count = 0;
        for (i = 2; i <= num / 2; i++)
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