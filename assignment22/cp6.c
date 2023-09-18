// Write a program in C to find the largest element using Dynamic Memory Allocation
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *ptr;
    int i = 0, j = 0, size = 0,max=-99999;
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
       if(ptr[i]>max)
       {
        max=ptr[i];
       }
    }
    printf("Largest number is %d\n",max);
    free(ptr);
    return 0;
}