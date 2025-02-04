/*Write a program in C to accept a grade and declare the equivalent description
Grade        Description
E            Excellent
V            Very Good
G            Good
A            Average
F            Fail*/

#include <stdio.h>

int main()
{

    char grade;

    printf("Enter your grade(E,V,G,A,F): ");
    grade = getchar();

    switch (grade)
    {
    case 'E':
        printf("Excellent");
        break;
    case 'V':
        printf("Very Good");
        break;
    case 'G':
        printf("Good");
        break;
    case 'A':
        printf("Average");
        break;
    case 'F':
        printf("Fail");
        break;

    default:
        printf("Invalid input");
        break;
    }

    return 0;
}