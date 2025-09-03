#include<stdio.h>

int recursive(int n) {
    if (n == 1 || n == 0) {
        return 1;
    }
    return recursive(n - 1) + recursive(n - 2);
}

int main(){
    int n, m;
    scanf("%d",&n);
    m = recursive(n);
    printf("method = %d",m);
    return 0;
}