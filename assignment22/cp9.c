/*Write a program to allocate memory dynamically of the size in bytes entered by the
user. Also handle the case when memory allocation is failed*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *ptr;
    int i = 0, size = 0;
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
    printf("You entered:\n");
    for (i = 0; i < size; i++)
    {
        printf("%d ", ptr[i]);
    }
    free(ptr);
    return 0;
}