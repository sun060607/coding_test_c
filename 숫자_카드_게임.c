#include <stdio.h>
#include <string.h>
int main() {
	int num1,num2,num5=110,num4[101],num6=0;
	int num3[1000][1000];
	scanf("%d %d",&num1,&num2);
	for(int i=0;i<num1;i++){
		for(int j=0;j<num2;j++){
			scanf("%d",&num3[i][j]);
		}
	}
	for(int i=0;i<num1;i++){
		for(int j=0;j<num2;j++){
			if(num3[i][j]<num5){
				num4[i] = num3[i][j];
				num5 = num3[i][j];
				num6++;
			}
		}
		num5 = 110;
	}
	num5 = 0;
	for(int i= 0;i<num6;i++){
		if(num5<num4[i]){
			num5 = num4[i];
		}
	}
	printf("%d",num5);
	return 0;
}
