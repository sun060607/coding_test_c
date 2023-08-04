#include <stdio.h>
int main(){
   int num1[10000]={},num2;
   scanf("%d",&num2);
   for(int i=0;i<num2;i++){
       scanf("%d",&num1[i]);
   }
   for(int j=num2-1;j>=0;j--){
       printf("%d ",num1[j]);
   }
    return 0;
}
