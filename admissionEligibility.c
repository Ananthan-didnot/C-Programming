/*
Write a C program to find the eligibility of admission for a professional course
based on the following criteria:
Eligibility Criteria: Marks in Maths >=65 and Marks in Physics >=55 and Marks in
Chemistry>=50 and Total in all three subject >=190 or Total in Maths and Physics
>=140
*/

#include<stdio.h>

int main(){
    int mathsM,physicsM,chemistryM,total,totalPM;

    printf("Enter the mark in Maths: ");
    scanf(" %d", &mathsM);
    printf("Enter the mark in Physics: ");
    scanf(" %d", &physicsM);
    printf("Enter the mark in Chemistry: ");
    scanf(" %d", &chemistryM);

    total = mathsM+physicsM+chemistryM;
    totalPM = mathsM+physicsM;

    if ((mathsM>=65 && physicsM>=55 && chemistryM>=50) && total>=190 || totalPM>=140){
        printf("You are eligible for a professional course!");

    }
    else{
        printf("You are NOT eligible for a professional course!");

    }

    return 0;
}