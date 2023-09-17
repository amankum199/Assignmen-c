
/*Write a menu driven program with the following options:
a. Check whether a given set of three numbers are lengths of an
isosceles triangle or not
b. Check whether a given set of three numbers are lengths of sides of
a right angled triangle or not
c. Check whether a given set of three numbers are equilateral triangle
or not
d. Exit*/
#include<stdio.h>
int main()
{
    int choice,a,b,c;
    printf("\nEnter your choice.\n");
    printf("1.To check Isosceles triangle.\n");
    printf("2. To check Right angle triangle.\n");
    printf("3. To check Equilateral triangle.\n");
    scanf("%d",&choice);

    printf("Enter length of 3 sides of triangle\n");
    scanf("%d  %d  %d",&a,&b,&c);
    switch(choice)
    {
        case 1: if(a==b||b==c||c==a)
             printf("Isosceles");
             else
             printf("Not an Isosceles");
            break;
        case 2: if(a*a==b*b+c*c || a*a+b*b==c*c || b*b==a*a+c*c )
            printf("Right Triangle");
             else
             printf("Not an Right Triangle");
            break;
        case 3: if((a==b)&&(b==c))
              printf("Equilateral Triangle");
             else
             printf("Not an Equilateral Triangle");
            break;
            default: printf("Invalid");
    }
    return 0;
}

