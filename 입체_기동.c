#include <stdio.h>
int main(){
    int num1,num4=0,num5=0;
    int num2[10000],num3[10000];
    scanf("%d",&num1);
    for(int i=1;i<=num1;i++){
        scanf("%d %d",&num2[i],&num3[i]);
    }
    for(int i=1;i<=num1;i++){
       for(int j=1;j<=num1;j++){
            if(num2[i]<num2[j]){
                num4= num2[i];
                num2[i]=num2[j];
                num2[j]=num4;
                num5= num3[i];
                num3[i]=num3[j];
                num3[j]=num5;
            }
        }
    }
    for(int i=1;i<=num1;i++){
        printf("%d %d\n",num2[i],num3[i]);
    }
    
    return 0;
}
