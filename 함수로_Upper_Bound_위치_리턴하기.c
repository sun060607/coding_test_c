#include <stdio.h>

int n, k, d[1010];
int upper_bound(int num1){
    int num2=0;
    for(int i=1;i<=n;i++){
        if(d[i]>num1){
            num2 = i;
            return num2;
            break;
        }
    }
    return n+1;
}
int main()
{
   scanf("%d", &n);

  for(int i=1; i<=n; i++)
    scanf("%d", &d[i]);

  scanf("%d", &k);

  printf("%d\n", upper_bound(k));
}
