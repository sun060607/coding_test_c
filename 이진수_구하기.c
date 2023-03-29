#include <stdio.h>

int main() {
	int num1,num2[20]={0,},num4=0,num3;
	scanf("%d",&num1);
	while(1){
		num2[num4] = num1%2;
		num1 = num1/2;
		num4++;
		if(num1 == 0){
			break;
		}
	}
	for(int i= num4-1;i>=0;i--){
		printf("%d",num2[i]);
	}
	return 0;
}
