#include <stdio.h>
char num1[202][202];
int num5,num6;
int su(int f,int h){
	if(f == -1||h==-1||f==num5||h==num6){
		return 0;
	}
	else if(num1[f][h]!='0'){
		return 0;
	}
	else if(num1[f][h]=='0'){
		num1[f][h] = '1';
	}
	return 1 + su(f-1,h)+su(f+1,h)+su(f,h-1)+su(f,h+1);
}
int main() {
	int num2=0,num3;
	scanf("%d %d",&num5,&num6);
	for(int i=0;i<num5;i++){
		scanf("%s",num1[i]);
	}
	for(int i=0;i<num5;i++){
		for(int j=0;j<num6;j++){
			num3 = 0;
			if(num1[i][j]!=0){
				num3 = su(i,j);
			}
			if(num3>=1)
				num2++;
		}
	}
	printf("%d",num2);
	return 0;
}

