#include<stdio.h>
int main() {
    double m1[3][3];
    short t1 , t2 = 1;
    for (int i = 0; i < 3 ; i++) {
        scanf("%lf %lf %lf",&m1[i][0],&m1[i][1],&m1[i][2]);
    }
    for (int j = 0; j < 3 ; j++) {
        for (int k = 0; k < 3; k++) {
            if (!t2) {break;}
            if ( j != k ) {
                t2 = m1[j][k] == 0;
            }
        }
    }
    t1 = m1[0][0] == m1[1][1] && m1[0][0] == m1[2][2];
    if (t1 && t2) {
        printf("This is a scalar matrix");
    } else {
        printf("This is not a scalar matrix");
    }
    return 0;
}