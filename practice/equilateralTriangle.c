/*Write a C program to check whether a triangle is Equilateral, Isosceles or Scalene
Hint: Equilateral triangle: All three sides are equal.
Isosceles triangle: All two sides are equal.
Scalene triangle: No sides are equal.*/

#include <stdio.h>

int main()
{
    int side1, side2, side3;

    printf("Enter the First side: ");
    scanf("%d", &side1);
    printf("Enter the Second side: ");
    scanf("%d", &side2);
    printf("Enter the Third side: ");
    scanf("%d", &side3);

    if (side1 == side2 && side2 == side3)
    {
        printf("It is an Equilateral triangle");
    }
    else if (side1 == side2 || side2 == side3 || side1 == side3)
    {
        printf("It is an Isosceles triangle");
    }
    else
    {
        printf("It is a Scalene triangle");
    }

    return 0;
}