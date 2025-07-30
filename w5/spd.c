#include <stdio.h>

int main() {
    float s1,s2,s3,max,tmp;
    char n1[40],n2[40],n3[40],nT[40];
    scanf("%f %[^\n]",&s1,n1);
    scanf("%f %[^\n]",&s2,n2);
    scanf("%f %[^\n]",&s3,n3);
    if (s1 > s2) {
        if (s2 > s3) {
            printf("%s is Fastest : %.3f",n3,s3);
        } else {
            printf("%s is Fastest : %.3f",n2,s2);
        }
    } else if (s1 > s3) {
        printf("%s is Fastest : %.3f",n3,s3);
    } else {
        printf("%s is Fastest : %.3f",n1,s1);
    }
    return 0;
}