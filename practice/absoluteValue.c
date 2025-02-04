/*
Write a program to find the absolute value of a number entered through the
keyboard.
*/

#include <stdio.h>
#include <math.h>

int main()
{
    int num, absValue;

    printf("Enter the number: ");
    scanf("%d", &num);

    absValue = fabs(num);

    printf("Absolute value of %d = %d", num, absValue);

    return 0;
}