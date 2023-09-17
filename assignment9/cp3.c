// Write a program which takes the day number of a week and displays a unique greeting message for the day.
#include <stdio.h>
int main()
{
    int day;
    printf("Enter the number of Days.\n");
    scanf("%d", &day);
    switch (day)
    {
    case 1:
        printf("Hey...\nToday is monday.");
        break;
    case 2:
        printf("Hey...\nToday is Tuesday.");
        break;
    case 3:
        printf("Hey...\nToday is Wednesday.");
        break;
    case 4:
        printf("Hey...\nToday is Thursday.");
        break;
    case 5:
        printf("Hey...\nToday is Friday.");
        break;
    case 6:
        printf("Hey...\nToday is Saturday.");
        break;
    case 7:
        printf("Hey...\nToday is Sunday.");
        break;
    default:
        printf("Invalid Input");
    }
    return 0;
}
