/*Write a function in C to merge two arrays of the same size sorted in descending
order*/
#include <stdio.h>
int main()
{
    int a[] = {1, 4, 7, 116, 134};
    int b[] = {2, 5, 9, 16, 23};
    int c[10];
    int i, j, k;
    for (k = 0; k < 10; k++)
    {
        if (i >= 5)
        {
            while (k < 10)
            {
                c[k] = b[j];
                j++;
                k++;
                if (k == 10)
                    break;
            }
        }
        else if (j >= 5)
        {
            while (k < 10)
            {
                c[k] = a[i];
                i++;
                k++;
                if (k == 10)
                    break;
            }
        }
        else if (a[i] < b[j])
        {
            c[k] = a[i];
            i++;
        }
        else
        {
            c[k] = b[j];
            j++;
        }
    }
    for (k = 0; k < 10; k++)
    {
        printf("%d ", c[k]);
    }
}
