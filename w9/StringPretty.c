#include <stdio.h>
#include <string.h>
#include <math.h>

int main() {
    int num,right1,left1,right2,left2;
    char fst[55],sec[45];
    scanf("%d %[^\n] %[^\n]",&num ,fst ,sec);
    right1 = (num - strlen(fst)) / 2;
    left1 = right1 == ( (float) num - strlen(fst) ) / 2 ? right1 : right1 + 1;
    right2 = (num - strlen(sec)) / 2;
    left2 = right2 == ( (float) num - strlen(sec) ) / 2 ? right2 : right2 + 1;
    for (int i = 0; i < num; i++) { printf("*"); }
    printf("\n*");
    for (int i = 0; i < left1 - 1; i++) { printf(" "); }
    for (int i = 0; i < strlen(fst); i++) {printf("%c",fst[i]);}
    for (int i = 0; i < right1 - 1; i++) { printf(" "); }
    printf("*\n");
    printf("*");
    for (int i = 0; i < left2 - 1; i++) { printf(" "); }
    for (int i = 0; i < strlen(sec); i++) {printf("%c",sec[i]);}
    for (int i = 0; i < right2 - 1; i++) { printf(" "); }
    printf("*\n");
    for (int i = 0; i < num; i++) { printf("*"); }
    return 0;
}