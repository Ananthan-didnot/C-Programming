/*write a program in c to find the sum of leading diagonal of a 2D array matrix */
#include<stdio.h>
int main(){
  int n,sum=0,i,j;
  printf("Enter the order of the matrix: ");
  scanf("%d",&n);
  
  int matrix[n][n];
  
  printf("\nEnter the elements of the matrix: ");
  for (i=0;i<n;i++){
    for (j=0;j<n;j++){
      scanf("%d",&matrix[i][j]);
    }
  }
  for (i=0;i<n;i++){
    matrix[i][i]-=matrix[i][i];
  }
  
  printf("The Matrix = \n");
  for (i=0;i<n;i++){
    for (j=0;j<n;j++){
      printf("%d\t",matrix[i][j]);
    }
    printf("\n");
  }
  return 0;
  }
