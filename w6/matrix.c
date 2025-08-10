#include<stdio.h>
int main () {
    double m1[3][3] = {0};
    double m2[3][3] = {0};
    double buffer;
    short i = 0, j = 0, k = 0 ;
    for (;i < 3;i++) {
        scanf("%lf %lf %lf",&m1[i][0],&m1[i][1],&m1[i][2]);
    }
    for (i=0;i<3;i++) {
        scanf("%lf %lf %lf",&m2[i][0],&m2[i][1],&m2[i][2]);
    }
    printf("A x B\n");
    for (i=0;i<3;i++) {
        for (j=0;j<3;j++) {
            buffer = 0;
            for (k=0;k<3;k++) {
                buffer += m1[i][k] * m2[k][j];
            }
            printf("%.2lf ",buffer);
        }
        printf("\n");
    }
    return 0;
}