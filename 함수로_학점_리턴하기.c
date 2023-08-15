#include <stdio.h>

int n;




char grade(int a){
    if(a>=90&&a<=100){
        return 'A';
    }
    else if(a>=80&&a<90){
        return 'B';
    }
    else if(a>=70&&a<80){
        return 'C';
    }
    else if(a>=60&&a<70){
        return 'D';
    }
    else{
        return 'F';
    }
}
int main()
{
  scanf("%d", &n);
  printf("%c", grade(n));
  return 0;
}
