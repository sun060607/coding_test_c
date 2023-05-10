#include <stdio.h>
int main() {
	int num1,num2,num3,num6,num7;
	char num4[100][100];
	int num5[100];
	int num8[100];
	int su;
	scanf("%d",&su);
	for(int i=0;i<su;i++){
		scanf("%s %d %d %d",num4[i],&num1,&num2,&num3);
		num5[i] = (num1+num2+num3)/3;
		num8[i] = i;
	}
	for(int i=0; i<su-1; i++){
		num6=i;
		for(int j=i+1; j<su; j++){
			if(num5[j]>num5[num6]){
				num6=j;
			}
		}
		num7 = num5[i];
		num5[i] = num5[num6];
		num5[num6] = num7;
		
		num7 = num8[i];
		num8[i] = num8[num6];
		num8[num6] = num7;
	}
	for(int i=0;i<su;i++){
		printf("%s\n",num4[num8[i]]);
	}
	return 0;
}
