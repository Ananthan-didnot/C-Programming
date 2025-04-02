/*Write a program to define a structure for
storing employee details (name, ID, and salary).
Input the details for n employees and display them.*/

#include <stdio.h>

typedef struct{
    char name[20];
    int id;
    float salary;
}employees;

int main(){
	int n;
    printf("Enter the no of Employees: ");
    scanf("%d",&n);
    employees s[n];
    
    for(int i=0;i<n;i++){
        getchar();
        printf("\nEnter the name: ");
        scanf("%[^\n]%*c", s[i].name);
        printf("\n Enter the ID: ");
        scanf("%d",&s[i].id);
        printf("\nEnter the Salary: ");
        scanf("%f",&s[i].salary);
    }
    for(int i=0;i<n;i++){
        printf("\n");
        printf("\nName: %s",s[i].name);
        printf("\nID: %d",s[i].id);
        printf("\nSalary: %.2f",s[i].salary);
    }
    return 0;
}