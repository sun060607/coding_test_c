#include <stdio.h>

int mymin(int num1,int num2){
    if(num1>num2){
        return num2;
    }else{
        return num1;
    }
}
main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d", mymin(a, b));
}
