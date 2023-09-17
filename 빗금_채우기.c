#include <stdio.h>
int main(){
    int num1[101][101]={},num2,num3,num4=1;\
    scanf("%d %d",&num2,&num3);
    for(int i=0;i<num2+num3-1;i++){
        for(int j=0;j<num2;j++){
            for(int h=num3-1;h>=0;h--){
                if(j+(num3-1-h)==i){
                    num1[j][h]=num4;
                    num4++;
                }
            }
        }
    }
     for(int i=0;i<num2;i++){
        for(int j=0;j<num3;j++){
            printf("%d ",num1[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
