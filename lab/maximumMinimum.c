/*Find Maximum and Minimum: Write a program to input elements into a one-dimensional array and find the maximum and minimum elements. Display their positions in the array.
*/
#include<stdio.h>
int main(){
  int max,min,maxpos,minpos,limit,i;
  printf("Enter the limits: ");
  scanf("%d",&limit);

  int arr[limit];
  printf("Enter the elements: ");
  for(i=0;i<limit;i++)
    {
      scanf("%d",&arr[i]);
    }
  min=arr[0];
  max=arr[0];
  for(i=1;i<limit;i++)
    {
      if (min>arr[i])
        {
          min=arr[i];
          minpos=i;
        }
     if(max<arr[i])
     {
      max=arr[i];
      maxpos=i;
      }
    }
  printf("The maximum value in the array is %d and its index position=%d\n",max,maxpos+1);
  printf("The minimum value in the array is %d and its index position=%d",min,minpos+1);
  return 0;
}

