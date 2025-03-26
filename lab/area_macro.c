/*Define a macro for the value of π (PI = 3.14159) and
write a program to calculate the area of a circle and a cylinder.
Use macros for constant values.*/

#include<stdio.h>
#define PI 3.14159
#define AREA(r) (PI*r*r)

int main(){
int r,h;
printf("Enter the radius of circle and a cylinder: ");
scanf("%d",&r);
printf("Enter the height of cylinder: ");
scanf("%d",&h);
int result1 = AREA(r);
int result2 = 2*PI*r*(r+h);
printf("Area of circle=%d",result1);
printf("\nArea of cylinder=%d",result2);
return 0;
}

