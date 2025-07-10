#include <stdio.h>

int main() {
    char a,b,c,d,e ;
    scanf("%c",&a);
    scanf(" %c",&b);
    scanf(" %c",&c);
    scanf(" %c",&d);
    scanf(" %c",&e);
    a = a + 1;
    c = c + 1;
    e = e + 1;
    printf("%c\n",a);
    printf("%c\n",b);
    printf("%c\n",c);
    printf("%c\n",d);
    printf("%c",e);
    return 0;
}