#include <stdio.h>

int main(){
    int n = 0,tmp = 0;
    while (tmp != -9) {
        n += tmp;
        scanf("%d",&tmp);
    }
    printf("%d",n);
    return 0;
}