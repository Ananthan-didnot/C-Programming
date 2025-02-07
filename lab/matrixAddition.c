/******************************************************
 * File         :   matrixAddition.c
 * Description  :   Program to add two matrices
 * Author       :   Ananthakrishnan K V
 * Version      :   1.0
 * Date         :   07/02/2025
 * ***************************************************/
#include<stdio.h>
int main(){
  int n,i,j;
  printf("Enter the order of the matrix: ");
  scanf("%d",&n);
  int m1[n][n],m2[n][n],sum[n][n];
  printf("Enter the first matrix: \n");
  for (i=0;i<n;i++){
    for(j=0;j<n;j++){
      scanf("%d",&m1[i][j]);
    }
  }
  printf("Enter the second matrix: \n");
  for (i=0;i<n;i++){
    for(j=0;j<n;j++){
      scanf("%d",&m2[i][j]);
    }
  }
  for (i=0;i<n;i++){
    for(j=0;j<n;j++){
      sum[i][j]=m1[i][j]+m2[i][j];
    }
  }
  printf("          SUM OF THE MATRIX");
  printf("\n------------------------------------\n");
  for (i=0;i<n;i++){
    for(j=0;j<n;j++){
      printf("%d\t",sum[i][j]);
    }
    printf("\n");
  }
return 0;
}

