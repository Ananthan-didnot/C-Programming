/*Given the length and breadth of a rectangle, write a program to find whether the
area of the rectangle is greater than its perimeter. For example, the area of the
rectangle with length = 5 and breadth = 4 is greater than its perimeter.*/

#include <stdio.h>

int main()
{
    int length, breadth, area, perimeter;
    printf("Enter the length of rectangle: ");
    scanf("%d", &length);
    printf("Enter the breadth of rectangle: ");
    scanf("%d", &breadth);

    area = length * breadth;
    perimeter = 2 * (length + breadth);
    printf("Area = %d\n", area);
    printf("Perimeter = %d\n", perimeter);

    if (area > perimeter)
    {
        printf("The area of rectangle is greater than the perimeter");
    }
    else if (area == perimeter)
    {
        printf("The area of rectangle is equal to the perimeter");
    }
    else
    {
        printf("The area of rectangle is smaller than the perimeter");
    }

    return 0;
}