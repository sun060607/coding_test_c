#include <stdio.h>
int main() {
	int num1,num2[200001],num3=0,num4;
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
	if(num1%2==0){
		printf("%d",num2[num1/2-1]);
	}else{
		printf("%d",num2[num1/2]);
	}
	return 0;
}
