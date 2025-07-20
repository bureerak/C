#include <stdio.h>
int main(){
    float h,w;
    scanf("%f %f",&h,&w);
    printf("%f",w / ((h/100) * (h/100)));
    return 0;
}