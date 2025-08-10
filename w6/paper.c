#include<stdio.h>
#include<math.h>
int main() {
    int a1,a2,res;
    scanf("%*c%d %*c%d",&a1,&a2);
    printf("%d", (int) pow( 2 , a2 - a1 ));
    return 0;
}