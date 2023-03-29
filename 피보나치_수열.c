#include <stdio.h>
long long int num1[1000];
long long int num;
long long int f(long long int n){
    if(num1[n]) return num1[n];
    else if(n==1) return 1;
    else if(n==2) return 1;
    else{
        return num1[n] = (f(n-1)+f(n-2))%10009;
    }
}
int main(){
    scanf("%lld",&num);
    printf("%d",f(num));
}
