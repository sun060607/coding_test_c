#include <stdio.h>
int main(){
    int num1,num2,num3[10000001];
    scanf("%d",&num1);
    for(int i=0;i<num1;i++){
        scanf("%d",&num2);
        num3[num2]=1;
    }
    scanf("%d",&num1);
    for(int j=0;j<num1;j++){
        scanf("%d",&num2);
        printf("%d ",num3[num2]);
    }
    return 0;
}
