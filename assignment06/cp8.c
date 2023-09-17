#include<stdio.h>
int main()
{
    int i,n,k=0;
    printf("Enter the number\n");
    scanf("%d",&n);
    for(i=2;i<=n/2;i++)
    {
        if(n%i==0)
            k=1;
        break;
    }
   if(k==1){
    printf("Not prime");
    }else{
    printf("Prime");
    }
    return 0;
}
