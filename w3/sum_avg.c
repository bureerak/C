#include <stdio.h>

int main(){
    float a,b,c,d;
    scanf("%f",&a);
    scanf("%f",&b);
    scanf("%f",&c);
    scanf("%f",&d);
    printf("Summation is %.2f\n",a+b+c+d);
    printf("Average is %.3f",(a+b+c+d) / 4 );
    return 0;
}