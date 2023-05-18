#include <stdio.h>
int main() {
	int num1,num2[101],num3=0,num4=0,num5=0,num6[101],num7=0;
	scanf("%d",&num1);
	for(int i=0;i<num1;i++){
		scanf("%d",&num2[i]);
	}
	for(int i=0; i<num1-1; i++)
    {
        num3=i;
        for(int j=i+1; j<num1; j++)
        {
            if(num2[j]<num2[num3])
            {
                num3=j;
            }
        }
        num4=num2[i];
        num2[i]=num2[num3];
        num2[num3]=num4;
    }
	num5=num2[0];
	for(int i=1;i<num1;i++){
		num5 = num5+num2[i];
		num6[i-1] = num5;
	}
	for(int i=0;i<num1-1;i++){
		num7 = num6[i]+num7;
	}
	printf("%d",num7);
	return 0;
}
