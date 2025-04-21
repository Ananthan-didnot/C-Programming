#include <stdio.h>

void swap(int *a,int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main(){
    int n1=20,n2=10;
    swap(&n1,&n2);
    printf("n1 = %d  n2 = %d",n1,n2);
}