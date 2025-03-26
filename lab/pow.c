/*Write a program to calculate the power of a number using recursion.
The base and exponent should be taken as input from the user.*/

#include<stdio.h>
int power(int base,int expo){
if(expo==0){return 1;}
else { return expo==1 ? base : base*power(base,expo-1);}
}

int main(){
int base,expo;
printf("Enter the base and exponent: ");
scanf("%d%d",&base , &expo);
printf("%d",power(base,expo));

return 0;
}
