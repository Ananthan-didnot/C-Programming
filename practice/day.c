/*Write a program in C to read any day in integer number and display day name in
the word.
Test Data : 4
Expected Output : Thursday*/

#include <stdio.h>

int main()
{
    int month;

    printf("Enter the month in number(1-7): ");
    scanf("%d", &month);

    switch (month)
    {
    case 1:
        printf("Monday");
        break;
    case 2:
        printf("Tuesday");
        break;
    case 3:
        printf("Wednesday");
        break;
    case 4:
        printf("Thursday");
        break;
    case 5:
        printf("Friday");
        break;
    case 6:
        printf("Saturday");
        break;
    case 7:
        printf("Sunday");
        break;

    default:
        printf("Invalid input");
        break;
    }

    return 0;
}