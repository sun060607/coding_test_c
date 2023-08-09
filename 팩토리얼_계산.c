#include <stdio.h>
int num2 = 1;
void f(int k){
    if(k<1){
        return;
    }
    num2 = num2 * k;
    f(k-1);
}
int main(){
    int num1;
    scanf("%d",&num1);
    f(num1);
    printf("%d",num2);
    
    return 0;
}
