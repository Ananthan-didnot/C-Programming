/*Program to swap two numbers using a temporary variable and without using one.*/

#include <stdio.h>

int main(){
    int a, b, temp;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("Before swapping: a = %d, b = %d\n", a, b);
    
    // Swapping using a temporary variable
    temp = a;
    a = b;
    b = temp;
    printf("After swapping using temp: a = %d, b = %d\n", a, b);

    // Swapping without using a temporary variable
    a = a + b;  
    b = a - b; 
    a = a - b;    
    printf("After swapping without temp: a = %d, b = %d\n", a, b);

    return 0;
}