#include <stdio.h>
int main() {
	int num1,num2,num3=0;
	scanf("%d %d",&num1,&num2);
	while(num1!=1){
		if(num1%num2==0){
			num1 = num1/num2;
		}else if(num1%num2==1){
			num1 = num1-1;
		}
		num3++;
	}
	printf("%d",num3);
	return 0;
}
