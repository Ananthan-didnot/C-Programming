#include <stdio.h>

int main(){
    int num,i;
    unsigned long long factorial=1;
    printf("Enter a number: ");
    scanf("%d",&num);
    
    for(i=1;i<=num;i++){
        factorial*=i;
    }
    printf("factoirial of %d = %d",num,factorial);


    return 0;
}
