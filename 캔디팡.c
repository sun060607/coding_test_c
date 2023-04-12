#include <stdio.h>
int num1[7][7];
int su(int f,int h,int co){
	if(f == -1||h==-1||f==7||h==7){
		return 0;
	}
	else if(num1[f][h]!=co){
		return 0;
	}
	else if(num1[f][h]==co){
		num1[f][h] = 0;
	}
	return 1 + su(f-1,h,co)+su(f+1,h,co)+su(f,h-1,co)+su(f,h+1,co);
}
int main() {
	int num2=0,num3;
	for(int i=0;i<7;i++){
		for(int j=0;j<7;j++){
			scanf("%d",&num1[i][j]);
		}
	}
	for(int i=0;i<7;i++){
		for(int j=0;j<7;j++){
			num3 = 0;
			if(num1[i][j]!=0){
				num3 = su(i,j,num1[i][j]);
			}
			if(num3>=3){
				num2++;
			}
		}
	}
	printf("%d",num2);
	return 0;
}

