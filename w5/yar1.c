#include <stdio.h>

int main() {
    int state,round,safe,count = 0;
    float dist;
    scanf("%d %f %d %d",&state,&dist,&round,&safe);
    if (state == 0) {
        count++;
    }
    if (dist >= 1) {
        count++;
    }
    if (round <= 2) {
        count++;
    }
    if (round - safe + 1 <= 2) {
        count++;
    }
    if (count == 0) {
        printf("DRS allowed");
    } else {
        printf("DRS not allowed %d",count);
    }
    return 0;
}