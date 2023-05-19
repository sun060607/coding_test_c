#include <stdio.h>
int main() {
	int num1,num2[101],num3=0,num4=0;
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
	for(int i=0;i<num1;i++){
		printf("%d\n",num2[i]);
	}
	return 0;
}

//13456
//2 0 1 2 3
