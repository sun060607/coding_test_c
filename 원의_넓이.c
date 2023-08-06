#include <stdio.h>

float circle(float parameter){
    parameter = 3.14*parameter*parameter;
    return parameter;
}
main()
{
    int r;
    scanf("%d", &r);
    printf("%.2f", circle(r));
}
