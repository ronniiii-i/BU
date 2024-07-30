#include <stdio.h>
#include <stdlib.h>

int main()
{
    int day_number;
    printf("Enter a number from 1 -  7\nto determine the day of the week: ");
    scanf("%d", &day_number);

    switch (day_number)
    {
    case 1:
        printf("Day %d is Sunday", day_number);
        break;

    case 2:
        printf("Day %d is Monday", day_number);
        break;

    case 3:
        printf("Day %d is Tuesday", day_number);
        break;

    case 4:
        printf("Day %d is Wednesday", day_number);
        break;

    case 5:
        printf("Day %d is Thursday", day_number);
        break;

    case 6:
        printf("Day %d is Friday", day_number);
        break;

    case 7:
        printf("Day %d is Saturday", day_number);
        break;
    default:
        printf("Invalid number. Please enter a number between 1 and 7");
    }
}