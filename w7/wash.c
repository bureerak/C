#include<stdio.h>
int main() {
    int game;
    double hp = 2800, total = 0, hit; //840
    scanf("%d",&game);
    game /= 2;
    for (int i = 0; i < game; i++) {
        hit = 0.02 * hp;
        total += hit;
        hp -= hit;
    }
    printf("%.2lf\n",total);
    (total > 840) ? printf("Danger") : printf("Safe");
    return 0;
}