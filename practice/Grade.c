/*
Write a C program to read roll no, name and marks of three subjects and calculate
the total, percentage.
If the percentage of the marks >=75 then print First Class with Distinction
If the percentage of the marks >=60 and <75 print First Class
If the percentage of the marks <60 print Second Class
*/

#include<stdio.h>

int main(){
  int rollNo,sub1,sub2,sub3,max,total;
  char name[20];
  
  printf("Enter the name: ");
  fgets(name,20,stdin);
  printf("Enter the roll number: ");
  scanf("%d",&rollNo);
  printf("Enter the maximum mark of all subject: ");
  scanf("%d",&max);
  printf("Enter the mark of subject 1: ");
  scanf("%d",&sub1);
  printf("Enter the mark of subject 2: ");
  scanf("%d",&sub2);
  printf("Enter the mark of subject 3: ");
  scanf("%d",&sub3);
  
  total=sub1+sub2+sub3;
  double percentage=((double)total/ (double)max)*100;
  
  if(percentage>=75){
   printf("%s\n%d",name,rollNo);
   printf("You have %.2lf\%",percentage);
   printf("\nYou have First Class with Distinction!");
  }
  else if (percentage>=60 && percentage<75){
    printf("%s%d",name,rollNo);
    printf("You have %.2lf\%",percentage);
    printf("\nYou have First Class!");
    }
  else{
   printf("%s\n%d",name,rollNo);
   printf("You have %.2lf\%",percentage);
   printf("\nYou have Second Class!");
  }
  
  
  return 0;
}
