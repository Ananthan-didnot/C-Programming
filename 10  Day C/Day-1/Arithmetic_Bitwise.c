/*Program to demonstrate all arithmetic and bitwise operations.*/

#include <stdio.h>

int main(){
    unsigned int a, b, sum, diff, prod, quot;
    unsigned int and, or, xor, not_a, not_b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    // Arithmetic operations
    sum = a + b;    
    diff = a - b;
    prod = a * b;   
    quot = a / b;

    // Bitwise operations
    and = a & b;
    or = a | b;
    xor = a ^ b;
    not_a = ~a;
    not_b = ~b;

    // Display results
    printf("Sum: %d\n", sum);
    printf("Difference: %d\n", diff);
    printf("Product: %d\n", prod);
    printf("Quotient: %d\n", quot);
    printf("Bitwise AND: %d\n", and);
    printf("Bitwise OR: %d\n", or);
    printf("Bitwise XOR: %d\n", xor);
    printf("Bitwise NOT of first number: %d\n", not_a);
    printf("Bitwise NOT of second number: %d\n", not_b);

    printf("Left Shift of first number: %d\n", a << 1); // Left shift by 1 bit
    printf("Right Shift of first number: %d\n", a >> 1); // Right shift by 1 bit
    printf("Left Shift of second number: %d\n", b << 1); // Left shift by 1 bit
    printf("Right Shift of second number: %d\n", b >> 1); // Right shift by 1 bit

    return 0;
}