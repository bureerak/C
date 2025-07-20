#include <stdio.h>

int main(){
    double pi = 3.14159265359;
    double price,d,h,v;
    scanf("%lf",&price);
    scanf("%lf",&d);
    scanf("%lf",&h);
    v = (d/2) * (d/2) * pi * h;
    printf("Volume : %.2lfml\n",v);
    printf("Baht/ml : %.4lf",price/v);
    return 0;
}