#include <stdio.h>
#include <math.h>

int main(){
    float h,w;
    scanf("%f\n%f",&h,&w);
    printf("%.2f",sqrt( (h*h)+(w*w)) );
    return 0;
}