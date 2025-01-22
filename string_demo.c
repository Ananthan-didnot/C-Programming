#include <stdio.h>

int main(){
  char name[20];
  printf("Enter your name: ");
  //scanf("%c",name);
  fgets(name,sizeof(name),stdin);
  printf("Welcome %s",name);
  return 0;
}
