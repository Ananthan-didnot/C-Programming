// Write a C program to read the age of a candidate and determine whether it is
//eligible for casting his/her own vote.
//Test Data: 21
//Expected Output: Congratulation! You are eligible for casting your vote.


#include<stdio.h>

int main(){
    int age;

    printf("Enter your Age: ");
    scanf("%d",&age);
    printf("Test Data: %d\n",age);

    if(age>=18){
        printf("Congratulation! You are eligible for casting your vote.\n");
    }
    else{
        printf("Sorry! You are not eligible for casting a vote.\n");
    }

    return 0;
}
