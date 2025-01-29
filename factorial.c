/*
Factorial Using While Loop: Write a program to calculate the factorial 
of a given number using a while loop. 
Validate the input to ensure it is a positive integer.
*/

#include<stdio.h>

int main(){
  int num;
  long long unsigned factorial=1;
    printf("Enter a number: ");
    scanf("%d",&num);
    int number=num;
    
    if(num<0){
    printf("Number should be greater than zero");
    }
    
    while(num>0){
    factorial*=num;
    num--;
    }
  printf("Factorial of %d = %llu",number,factorial);

return 0;
}
