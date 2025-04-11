/*Write a program to input two numbers and display their sum, difference, product, and quotient.*/

#include <stdio.h>

int main(){
    int a, b, sum, diff, prod, quot;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    
    sum = a + b;
    diff = a - b;
    prod = a * b;
    quot = a / b;
    
    printf("Sum: %d\n", sum);
    printf("Difference: %d\n", diff);
    printf("Product: %d\n", prod);
    printf("Quotient: %d\n", quot);
    
    return 0;
}