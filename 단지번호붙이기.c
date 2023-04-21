#include <stdio.h>
int num2[30][30];
int num4[30][30];
int num5[10000]={0,};
int num6 = 0;
/*
히히히히히히히히히히히히
히히히히히히히히히히히히
히히히히히히히히히히히히
히히히히히히히히히히히히
히히히히히히히히히히히히
히히히히히히히히히히히히
					⠉⠲⣤⡀
⠀⠀⠀⠀⠀⠀⢀⣤⣀⣀⣀⠀⠻⣷⣄
⠀⠀⠀⠀⢀⣴⣿⣿⣿⡿⠋⠀⠀⠀⠹⣿⣦⡀
⠀⠀⢀⣴⣿⣿⣿⣿⣏⠀⠀⠀⠀⠀⠀⢹⣿⣧
⠀⠀⠙⢿⣿⡿⠋⠻⣿⣿⣦⡀⠀⠀⠀⢸⣿⣿⡆ 
⠀⠀⠀⠀⠉⠀⠀⠀⠈⠻⣿⣿⣦⡀⠀⢸⣿⣿⡇
⠀⠀⠀⠀⢀⣀⣄⡀⠀⠀⠈⠻⣿⣿⣶⣿⣿⣿⠁
⠀⠀⠀⣠⣿⣿⢿⣿⣶⣶⣶⣶⣾⣿⣿⣿⣿⡁
⢠⣶⣿⣿⠋⠀⠀⠛⠿⠿⠿⠿⠿⠛⠻⣿⣿⣦⡀
⣿⣿⠟⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀ ⠀⠈⠻⣿⡿
*/
void su(int su1,int su2){
	num4[su1][su2] = 1;
	num5[num6]++;
	if(num2[su1][su2-1]==1&&num4[su1][su2-1]==0)
		su(su1,su2-1);
	if(num2[su1-1][su2]==1&&num4[su1-1][su2]==0)
		su(su1-1,su2);
	if(num2[su1][su2+1]==1&&num4[su1][su2+1]==0)
		su(su1,su2+1);
	if(num2[su1+1][su2]==1&&num4[su1+1][su2]==0)
		su(su1+1,su2);
}
int main(){
	int num1;
	char num3[30];
	scanf("%d",&num1);
	for(int i=0;i<num1;i++){
		scanf("%s",num3);
		for(int j=0;j<num1;j++){
			num2[i][j] = num3[j] - 48;
		}
	}
	
	
	for(int i=0;i<num1;i++){
		for(int j=0;j<num1;j++){
			if(num2[i][j] ==1&&num4[i][j]==0){
				su(i,j);
				num6++;
			}
		}
	}
	printf("%d\n",num6);
	
	int num0,num01,num02;
	for(int i=0; i<10000-1; i++){
		num0=i;
		for(int j=i+1; j<10000; j++){
			if(num5[j]<num5[num0]){
			 num0=j;
			}
		}
		num01=num5[i];
		num5[i]=num5[num0];
		num5[num0] = num01;
	}
	for(int i = 0;i<10000;i++){
		if(num5[i]!=0){
			printf("%d\n",num5[i]);
		}
	}
	return 0;
}
