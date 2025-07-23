#include <stdio.h>

int main() {
    float a,b,c,tmp;
    scanf("%f %f %f",&a,&b,&c);
    if (a > b) {
        tmp = b;
        b = a;
        a = tmp;
    }
    if (b > c) {
        tmp = c;
        c = b;
        b = tmp;
    }
    if (a > b) {
        tmp = b;
        b = a;
        a = tmp;
    }
    printf("%.2f",b);
}