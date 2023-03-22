#include <stdio.h>
int main() {
	int num1,num2,num3;
	int num4[1001];
	int num5=0;
	int num6,num7=0,num8=0;
	scanf("%d %d %d",&num1,&num2,&num3);
	for(int i=0;i<num1;i++){
		scanf("%d",&num4[i]);
	}
	for(int i=0; i<num1-1; i++){
		num5=i;
		for(int j=i+1; j<num1; j++){
			if(num4[j]>num4[num5]){
			 num5=j;
			}
		}
		num6=num4[i];
		num4[i]=num4[num5];
		num4[num5]=num6;
	}
	num7 = ((num2/(num3+1))*num3)+(num2%(num3+1));
	for(int i = 0;i<num7;i++){
		num8+=num4[0];
	}
	for(int i = 0;i<num2-num7;i++){
		num8+=num4[1];
	}
	printf("%d",num8);
	return 0;
}
