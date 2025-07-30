#include <stdio.h>

int main(){
    int err = 0;
    float bank,wallet,mny;
    char btn;
    scanf("%f %f",&bank,&wallet);
    while (err < 3) {
        scanf(" %c %f",&btn, &mny);
        if (btn == 'E') {break;}
        if (btn == 'D' && mny <= wallet) {
            wallet -= mny;
            bank += mny;
            err = 0;
        } else if (btn == 'W' && mny <= bank) {
            wallet += mny;
            bank -= mny;
            err = 0;
        } else {err++;}
    }
    printf("%.2f\n",bank);
    printf("%.2f",wallet);
    return 0;
}