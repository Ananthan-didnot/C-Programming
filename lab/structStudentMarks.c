/* Develop a program to calculate the total and
average marks of a group of students using an array of structures.
Include student name, roll number, and marks in three subjects.*/

#include <stdio.h>

typedef struct{
    char name[20];
    int rollNumber;
    float m1;
    float m2;
    float m3;
}students;

int main(){
	int n;
    float totalMarkOfGroup=0,totalMarkofStudent=0,averageMarkOfGroup=0;
    printf("Enter the no of Students: ");
    scanf("%d",&n);
    students s[n];
    
    for(int i=0;i<n;i++){
        getchar();
        printf("\nEnter the name: ");
        scanf("%[^\n]%*c", s[i].name);
        printf("\n Enter the rollNumber: ");
        scanf("%d",&s[i].rollNumber);
        printf("\nEnter the mark of subject 1: ");
        scanf("%f",&s[i].m1);
        printf("\nEnter the mark of subject 2: ");
        scanf("%f",&s[i].m2);
        printf("\nEnter the mark of subject 3: ");
        scanf("%f",&s[i].m3);
    }
        printf("Name\t\t\tRoll Number");
    for(int i=0;i<n;i++){
        printf("\n%s\t\t\t%d",s[i].name,s[i].rollNumber);
    }
    for(int i=0;i<n;i++){
        totalMarkofStudent=s[i].m1+s[i].m2+s[i].m3;
        totalMarkOfGroup+=totalMarkofStudent;
    }
    averageMarkOfGroup=totalMarkOfGroup/n;

    printf("\nTotal mark of group= %.2f",totalMarkOfGroup);
    printf("\nAverage mark of group= %.2f",averageMarkOfGroup);
    return 0;
}