#include <stdio.h>
int num[1000];

int main(){
    int num1;
    num[0]=1;
    num[1]=1;
    scanf("%d",&num1);
    for(int i=2;i<=num1;i++){
        num[i] = (num[i-2]*2+num[i-1])%10007;
    }
    printf("%d",num[num1]);
    return 0;
}
