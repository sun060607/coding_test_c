#include <stdio.h>
int main() {
	int num1,num2;
	char num3[202][202];
	int x=0,y=0,num4=0;
	scanf("%d %d",&num1,&num2);
	for(int i = 0; i < num1; i++){
		scanf("%s",num3[i]);
	}
	while(num3[x][y]!=2){
		if(num3[x+1][y] == '1') x += 1;
    else if(num3[x][y+1] == '1') y += 1;
    else break;
		num4++;
	}
	printf("%d",num4+1);
}
