#include <stdio.h>

int main(){
    int sec;
    int d,h,m,s;
    scanf("%d",&sec);
    s = sec;
    d = s/86400;
    s -= d*86400;
    h = s/3600;
    s -= h*3600;
    m = s/60;
    s -= m*60;
    printf("%d s = %d d %d h %d m %d s",sec,d,h,m,s);
    return 0;
}