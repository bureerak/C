#include<stdio.h>
int main() {
    double price, avgExp = 0, avgRom = 0, waste[4], liter[4], out;
    int choice[4], dist, expCount = 0, romCount = 0;
    scanf("%lf",&price);
    scanf("%d %d %d %d",&choice[0],&choice[1],&choice[2],&choice[3]);
    scanf("%lf %lf %lf %lf",&waste[0],&waste[1],&waste[2],&waste[3]);
    for (int i = 0; i < 4 ; i++) {
        dist = choice[i] == 1 ? 29 : 25;
        liter[i] = dist / waste[i];
        if (choice[i] == 1) {
            out = (liter[i] * price) + 60;
            avgExp += out;
            expCount++;
        } else {
            out = liter[i] * price;
            avgRom += liter[i] * price;
            romCount++;
        }
        printf("Day %d: fuel %.2lf L, cost %.2lf Baht\n",i+1, liter[i], out);
    }
    (expCount > 0) ? printf("Expressway: %.2lf Baht\n", avgExp/expCount) : printf("Expressway: 0.00 Baht\n");
    (romCount > 0) ? printf("Romklao: %.2lf Baht\n", avgRom/romCount) : printf("Romklao: 0.00 Baht\n");
    return 0;
}