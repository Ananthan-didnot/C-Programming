/*
Write a program to input three numbers and find the largest among them 
using nested if statements. Display appropriate messages for each scenario.
*/

#include<stdio.h>

int main(){
  int num1,num2,num3;
  
  printf("Enter the first number: ");
  scanf("%d",&num1);
  printf("Enter the second number: ");
  scanf("%d",&num2);
  printf("Enter the third number: ");
  scanf("%d",&num3);
  
  if (num1 > num2) {
        if (num1 > num3) {
            printf("The largest number is %d", num1);
        } else {
            printf("The largest number is %d", num3);
        }
    }
    else {
        if (num2 > num3) {
            printf("The largest number is %d", num2);
        } else {
            printf("The largest number is %d", num3);
        }
    }

    return 0;
  }

