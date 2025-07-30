#include <stdio.h>

int main() {
    int o,h,w;
    int sumO = 0,sumH = 0,sumW = 0;
    int count1 = 0,count2 = 0,count3 = 0,count4 = 0;
    for (int i = 0; i < 50; i++){
        scanf("%d %d %d", &o,&h,&w);
        if (o >= 20 && h >= 160) {count1++;}
        if (o < 20 && (h <= 180 || w >= 60)) {count2++;}
        if (o >= 30 && (w >= 40 && w <=80)) {count3++;}
        if (o < 40 && ( w < 85 || h <= 200)) {count4++;}
        sumO += o;
        sumH += h;
        sumW += w;
    }
    printf("Age >= 20 and Height >= 160: %d\n",count1);
    printf("Age < 20 and Height <= 180 or Weight >= 60: %d\n",count2);
    printf("Age >= 30 and Weight >= 40 and Weight <= 80: %d\n",count3);
    printf("Age < 40 and Weight < 85 or Height <= 200: %d\n",count4);
    printf("Average Age: %d\n",sumO/50);
    printf("Average Height: %.2f\n",sumH/50.0);
    printf("Average Weight: %.2f",sumW/50.0);
}