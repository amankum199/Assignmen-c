/*Write a program to ask the user to input a number of data values he would like to
enter then create an array dynamically to accommodate the data values. Now take
the input from the user and display the average of data values.*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *ptr;
    int i = 0, size = 0;
    float sum = 0;
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
        sum = sum + *(ptr + i);
    }
    printf("Average is %.2f \n ", sum / size);
    free(ptr);
    return 0;
}