#include <stdio.h>

int main(){
    char gender,licen;
    double wg,vol,alcohol,ans;
    int pc,hour;
    scanf("%c %lf %c %lf %lf %d %d",&gender,&wg,&licen,&vol,&alcohol,&pc,&hour);
    ans = (alcohol * vol / 100) * pc;
    ans = gender == 'M' ? ans / (wg * 0.68 * 10) : ans / (wg * 0.55 * 10);
    ans -= 0.015 * hour;
    if (ans < 0.05 && licen == 'Y'){
        printf("Safe");
    } else {
        printf("Not Safe");
    }
    return 0;
}