//Write a C program, which takes two integer operands and one operator form the
//user, performs the operation and then prints the result. (Consider the operators
//+,-,*, /, % and use Switch Statement)

#include<stdio.h>

int main(){
    int num1,num2;
    char operator;
    printf("Enter two numbers: ");
    scanf("%d%d",&num1,&num2);
    printf("Enter an operator(+,-,*,/,%%): ");
    scanf(" %c", &operator);
    

    switch (operator)
    {
    case '+':
        printf("%d+%d=%d",num1,num2,num1+num2);
        break;
    case '-':
        printf("%d-%d=%d",num1,num2,num1-num2);
        break;
    case '*':
        printf("%d*%d=%d",num1,num2,num1*num2);
        break;
    case '/':
        printf("%d/%d=%d",num1,num2,num1/num2);
        break;
    case '%':
        printf("%d%%%d=%d",num1,num2,num1%num2);
        break;
    
    default:
        printf("Invalid Operator entered");
        break;
    }

    return 0;
}
