#include <stdio.h>
int num1,num2=0;
void f(int k){
    if(k<1){
        return;
    }
    num2+=k;
    f(k-1);
}


int main(){
    scanf("%d",&num1);
    f(num1);
    printf("%d",num2);
    return 0;
}
