#include <stdio.h>

int main(){
	int num1,num2=0;
	scanf("%d",&num1);
	if(50000<=num1){
		num2 = num2 + num1/50000;
		num1 = num1%50000;
	}
	if(10000<=num1){
		num2 = num2 + num1/10000;
		num1 = num1%10000;
	}
	if(5000<=num1){
		num2 = num2 + num1/5000;
		num1 = num1%5000;
	}
	if(1000<=num1){
		num2 = num2 + num1/1000;
		num1 = num1%1000;
	}
	if(500<=num1){
		num2 = num2 + num1/500;
		num1 = num1%500;
	}
	if(100<=num1){
		num2 = num2 + num1/100;
		num1 = num1%100;
	}
	if(50<=num1){
		num2 = num2 + num1/50;
		num1 = num1%50;
	}
	if(10<=num1){
		num2 = num2 + num1/10;
		num1 = num1%10;
	}
	printf("%d",num2);
	return 0;
}
