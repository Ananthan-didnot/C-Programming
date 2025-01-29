/*
 If cost price and selling price of an item are input through the keyboard, write a
program to determine whether the seller has made profit or incurred loss. Also
determine how much profit he made or loss he incurred.
*/

#include<stdio.h>

int main(){
    int costPrice,sellPrice,profit,loss;

    printf("Enter the cost price: ");
    scanf("%d",&costPrice);
    printf("Enter the sell price: ");
    scanf("%d",&sellPrice);

   sellPrice>costPrice ? printf("You made Profit!\n Profit = %d",sellPrice-costPrice) : printf("You incurred Loss!\n Loss = %d",costPrice-sellPrice);
   

    return 0;
}
