#include <stdio.h>
int num1,num2;
int num3[1000][1000];
int num4[100000];
int num5=0;
void USA(int k, int n){
	for(int i=0;i<k;i++){
		if(num3[n][i]==1&&num4[i]==0){
			num4[i] = 1;
			USA(k,i);
			num5++;
		}
	}
}
int main() {
	int su,su1;
	scanf("%d",&num1);
	scanf("%d",&num2);
	for(int i=0;i<num2;i++){
		scanf("%d %d",&su,&su1);
		num3[su-1][su1-1] = 1;
		num3[su1-1][su-1] = 1;
	}
	num4[0] = 1;
	USA(num1,0);
	printf("%d",num5);
	return 0;
}
