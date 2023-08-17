#include <stdio.h>

int n;




void f(int num1){
    int num2 = 0;
    while(num1>num2){
        printf("love\n");
        num2++;
    }
}

int main()
{
  scanf("%d", &n);
  f(n);
  return 0;
}
