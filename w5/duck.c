#include <stdio.h>

int main() {
    int d;
    scanf("%d",&d);
    if (d > 50) {printf("Duck Type: Talkative Duck");}
    else if (d >= 11) {printf("Duck Type: Happy Duck");}
    else if (d >= 1) {printf("Duck Type: Chill Duck");}
    else if (d == 0) {printf("Duck Type: Silent Duck");}
    else {printf("Error");}

}