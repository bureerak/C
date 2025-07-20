#include <stdio.h>

int main(){
    float p,d,a;
    scanf("%f %f %f",&p,&d,&a);
    printf("%.2f",(1 - (d/100)) * p * a);
    return 0;
}