// Write a program in C to demonstrate how to handle the pointers in the program
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int x=5,*p,**q,***r;
    p=&x;
    q=&p;
    r=&q;
    printf("%d %d %d %d\n",x,**q,*p,***r);    
    printf("%d %d %d %d\n",x,*q,*p,*r);    
    printf("%d %d %d %d",x,q,p,r);    
    return 0;
}