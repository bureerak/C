#include <stdio.h>

int main() {
    int n,d;
    float p,p1,p2;
    scanf("%f %d %d",&p,&d,&n);
    p1 = ( 1 - (float)d / 100 ) * p * n;
    p2 =  (n - ( n / 3 )) * p ;
    if (p1<=p2){
        printf("Discount %d%%\n%.2f",d,p1);
    } else {
        printf("Buy 2 Get 1\n%.2f",p2);
    }
    return 0;
}