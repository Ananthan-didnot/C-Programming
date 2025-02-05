#include <stdio.h>

int main()
{
  int i,limit,j;

  printf("Enter the limit: ");
  scanf("%d",&limit);

  int arr[limit];

  printf("Enter the elements\n");
  printf("------------------\n");
  for (i=0;i<limit;i++)
    {
      printf("Enter the element %d: ",i+1);
      scanf("%d",&arr[i]);
    }
  for(i=0;i<limit-1;i++)
    {
      for(j=0;j<limit-i;j++)
        {
         if (arr[j]>arr[j+1])
          {
            int temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
          }
        }
    }
  printf("\nSorted array : \t");
  for (i=0;i<limit;i++)
    { 
      printf("%d\t",arr[i]);
    }
return 0;
}
