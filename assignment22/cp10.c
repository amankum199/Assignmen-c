/*Find out the maximum and minimum from an array using dynamic memory allocation in c */
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *ptr;
    int i = 0, j = 0, size = 0, max = -99999, min = 99999;
    printf("Enter size of array : ");
    scanf("%d", &size);
    ptr = (int *)calloc(size, sizeof(int));
    if (ptr == NULL)
    {
        printf("Memory allocation failed..");
        return 0;
    }
    printf("The entered %d values \n", size);
    printf("Enter the number\n");

    for (i = 0; i < size; i++)
    {
        scanf("%d", ptr + i);
    }
    for (i = 0; i < size; i++)
    {
        if (ptr[i] > max)
        {
            max = ptr[i];
        }
    }
    printf("Largest number is %d\n", max);
    for (i = 0; i < size; i++)
    {
        if (ptr[i] < min)
        {
            min = ptr[i];
        }
    }
    printf("Smallest number is %d\n", min);
    free(ptr);
    return 0;
}