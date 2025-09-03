#include<stdio.h>
int main(){
    char tae1[64],tae2[64];
    int t1[7],t2[7];
    int t1win = 0,t2win = 0,eq = 0;
    int s1 = 0,s2 = 0;
    scanf(" %[^\n]",tae1);
    for (int i = 0; i < 7; i++) {
        scanf("%d",&t1[i]);
        s1 += t1[i];
    }
    scanf(" %[^\n]",tae2);
    for (int i = 0; i < 7; i++) {
        scanf("%d",&t2[i]);
        s2 += t2[i];
    }

    for (int i = 0; i < 7; i++) {
        if (t1[i] < t2[i]) {
            t1win++;
        } else if (t1[i] > t2[i]) {
            t2win++;
        } else {
            eq++;
        }
    }

    printf("%s: %d minutes, average %d minutes/day\n",tae1,s1,s1/7);
    printf("%s: %d minutes, average %d minutes/day\n",tae2,s2,s2/7);
    printf("Faster days - %s: %d, %s: %d, Equal: %d",tae1,t1win,tae2,t2win,eq);
    return 0;
}