#include<stdio.h>
int main()
{
    int i,j;
    char count;
    for(i=0;i<=6;i++)
    {
        count='A';
        for(j=0;j<=(6-i);j++)
        printf("%c",count++);

      /* for(j=0;j<2*i-1;j++)
        printf(" ");*/
     count;
       for(j=0;j>=7-i&&j<=5+i;j++)
       printf("%c",--count);
     printf("\n");
    }
}
