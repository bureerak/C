#include<stdio.h>
#include<string.h>
#include<math.h>
int main() {
    char n[3][10] ;
    double f[3] = {0} ,tank;
    double n1,n2,n3;
    int date;
    scanf("%d",&date);
    scanf(" %s %s %s",n[0],n[1],n[2]);
    for (int i = 0; i < date; i++) {
        scanf("%lf %lf %lf", &n1,&n2,&n3);
        f[0] += n1; f[1] += n2; f[2] += n3;
    }
    for (int i = 0; i < 3 ; i++) {
        if (strcmp(n[i],"Nano") == 0) {
            tank = 6.6;
        } else {
            tank = 5.5;
        }
        f[i] = ceil(f[i] / tank);
        printf("%s: %d refills\n",n[i],(int)f[i]);
    }
    return 0;
}