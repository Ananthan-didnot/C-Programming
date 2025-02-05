/*
Sequential Search: Create a program to perform a sequential search in a one-dimensional array. Input the array elements and the key to search. Display whether the key is found and its position.
*/
#include <stdio.h>

int main(){
  int key,i,limit,found;

  printf("Enter the limit: ");
  scanf("%d",&limit);

  int arr[limit];

  printf("Enter the elements: ");
  for (i=0;i<limit;i++)
    {
    scanf("%d",&arr[i]);
    } 

  printf("Enter the key to search: ");
  scanf("%d",&key);

  for(i=0;i<limit;i++)
    {
    if (arr[i]==key) 
      {
      printf("The key %d is at the position %d\n",key,i+1);
      found=1;
      }
    }
  if(!found){printf("Key not found");}
return 0;
}
