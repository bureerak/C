#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    for (;n != 0;) {
        printf("%d ",n);
        n = n>0?n-1:n+1;
    }
    if (n == 0)
        printf("0");
    return 0;
}