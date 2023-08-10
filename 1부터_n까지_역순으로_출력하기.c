#include <stdio.h>
int num3;
void p(int num2){
    if(num2<1){
        return;
    }
    printf("%d\n",num2);
    p(num2-1);
}
int main(){
    int num1;
    scanf("%d",&num1);
    p(num1);
    
    return 0;
}
