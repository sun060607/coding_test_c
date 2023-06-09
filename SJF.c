#include <stdio.h>
//sjf
int main(){
    int num1[5],num2=0,num3=0,num4=0,num5=0;
    int su[5] = {0,1,2,3,4};
    //5개 실행 시간 받기
    for(int i=0;i<5;i++){
        scanf("%d",&num1[i]);
    }
    //1번째 들어온 p0을 제외하고 실행 순서 및 대기 정렬
    for(int i=1; i<5-1; i++)
    {
        num4=i;
        for(int j=i+1; j<5; j++)
        {
            if(num1[j]<num1[num4])
            {
                num4=j;
            }
        }
        num5 = su[i];
        su[i] = su[num4];
        su[num4] = num5;
        num5=num1[i];
        num1[i]=num1[num4];
        num1[num4]=num5;
    }
    //배열의 순서를 입력 받은 시간이라고 가정하여 실행
    //대기 시간 총합 계산하는 부분
    for(int j=1;j<5;j++){
        for(int h= 0;h<j;h++){
            num3 = num1[h]+num3;
        }
        num2 = num3+num2-su[j];
        num3=0;
    }
    printf("%.2f",num2/5.0);
    return 0;
}
