#include <stdio.h>

int main() {
    int m,n,tmp;
    scanf("%d %d",&m,&n);
    tmp = m;
    n = m > n ? n - 1 : n + 1;
    for (;tmp != n;) {
        printf("%d ",tmp);
        tmp = m > n ? tmp - 1 : tmp + 1;
    }
}