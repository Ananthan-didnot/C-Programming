/*WAP to take details of n students using struct*/
#include <stdio.h>

typedef struct{
    int rollNo;
    char name[20];
    float cgpa;
}student;

int main(){
	int n;
    printf("Enter the no of students: ");
    scanf("%d",&n);
    student s[n];
    
    for(int i=0;i<n;i++){
        getchar();
        printf("\nEnter the name: ");
        fgets(s[i].name,sizeof(s[i].name),stdin);
        s[i].name[strcspn(s[i].name, "\n")] = '\0';
        printf("\n Enter the roll number: ");
        scanf("%d",&s[i].rollNo);
        printf("\nEnter the cgpa: ");
        scanf("%f",&s[i].cgpa);
    }
    for(int i=0;i<n;i++){
    printf("\nName: %s",s[i].name);
    printf("\nRollNO: %d",s[i].rollNo);
    printf("\nCGPA: %.2f",s[i].cgpa);
    }
    return 0;
}
