#include <stdio.h>
int main(){
    char num1[100]={};
    int num2,num3;
    gets(num1);
    scanf("%d %d",&num2,&num3);
    for(int i=num2;i<=num2+num3-1;i++){
        printf("%c",num1[i]);
    }
    
    return 0;
}
