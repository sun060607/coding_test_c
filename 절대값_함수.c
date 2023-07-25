#include <stdio.h>
int main(){
    double num1;
    scanf("%lf",&num1);
    if(num1>=0){
        printf("%.10g",num1);
    }
    else{
        printf("%.10g",num1*-1);
    }
    
    return 0;
}
