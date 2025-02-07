/*write a program in c to find the sum of leading diagonal of a 2D array matrix */
#include<stdio.h>
int main(){
  int r,c,sum=0,i,j;
  printf("Enter the row and column: ");
  scanf("%d%d",&r,&c);
  
  int matrix[r][c];
  
  printf("\nEnter the elements of the matrix: ");
  for (i=0;i<r;i++){
    for (j=0;j<c;j++){
      scanf("%d",&matrix[i][j]);
    }
  }
  
  printf("The Matrix = \n");
  for (i=0;i<r;i++){
    for (j=0;j<c;j++){
      printf("%d\t",matrix[i][j]);
    }
    printf("\n");
  }
  return 0;
  }
