#include <stdio.h>

int n, a, b, d[1010];
long long int subsetsum(int num1,int num2){
    long long num3 =0;
    for(int i = num1;i<=num2;i++){
        num3 = num3 + d[i];
    }
    return num3;
}
int main()
{
  scanf("%d", &n);

  for(int i=1; i<=n; i++)
    scanf("%d", &d[i]);

  scanf("%d%d", &a, &b);

  printf("%lld\n", subsetsum(a, b));
}
