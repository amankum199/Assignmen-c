#include<stdio.h>
int main()
{
    int a,b,hcf;
    printf("Enter two number\n");
    scanf("%d %d",&a,&b);
    for(int i=1; i<=a && i<=b; i++)
    {
        if(a%i==0 && b%i==0)
        {
            hcf=i;
        }
    }
    if(hcf==1)
    {
        printf("%d and %d are co-prime number",a,b);
    }
    else
        {
            printf("%d and %d are not co-prime number",a,b);
        }
    return 0;
}
