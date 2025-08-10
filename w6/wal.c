#include<stdio.h>
int main() {
    int a,b,sum = 0;
    scanf("%d %d",&a,&b);
    printf("pass : ");
    if (a > b) {
        if (a % 2 != 0) { a--; }
        for (;a >= b; a-=2) {
            printf("%d ",a);
            sum += a;
        }
    } else {
        if (a % 2 != 0) { a++; }
        for (;a <= b; a+=2) {
            printf("%d ",a);
            sum += a;
        }
    }
    printf("\nSum : %d",sum);
    return 0;
}