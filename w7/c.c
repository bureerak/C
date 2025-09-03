#include<stdio.h>
#include<math.h>
int main(){
    unsigned long long int x,y;
    double z;
    scanf("%llu %llu",&x,&y);
    z = sqrt( pow(x,2) + pow(y,2) );
    printf("sqrt(%llu^2+%llu^2)=%.2lf",x,y,z);
    return 0;
}