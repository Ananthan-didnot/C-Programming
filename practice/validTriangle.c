/*
Write a program to check whether a triangle is valid or not, when the three angles
of the triangle are entered through the keyboard. A triangle is valid if the sum of all
the three angles is equal to 180 degrees.
*/
#include <stdio.h>

int main()
{
    int angle1, angle2, angle3, sum = 0;

    printf("Enter three angles of the triangle: ");
    scanf("%d%d%d", &angle1, &angle2, &angle3);

    sum = angle1 + angle2 + angle3;

    if (sum == 180)
    {
        printf("The triangle is valid");
    }
    else
    {
        printf("The triangle is invalid");
    }
    
    return 0;
}