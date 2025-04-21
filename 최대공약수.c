#include <stdio.h>

int su(num1,num2){
  if(num2 == 0) return num1;
  return su(num2, num1%num2);
}

void main(){
  int num1,num2;
  scanf("%d %d",&num1,&num2);
  printf("%d",su(num1,num2));
}
