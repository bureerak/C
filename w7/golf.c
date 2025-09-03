#include<stdio.h>
#include<math.h>
int main(){
    int u, degree;
    double PI = 3.141592653589793, g = 9.81, rad, h;
    scanf("%d %d", &degree, &u);
    rad = degree * PI / 180;
    h =  ( u * u * pow(sin(rad),2) ) / (2 * g);
    printf("theta (degree) : %d\n", degree);
    printf("u (m/s) : %d\n",u);
    printf("h (m) : %.4lf",h);
    return 0;
}