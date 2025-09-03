#include<stdio.h>
int getNum (void);
int sqr (int x);
int printone (int x);

int main () {
    int a;
    int b;
    a = getNum() ;
    b = sqr(a) ;
    printone(b) ;
    return 0;
}

int getNum (void) {
    int numIn; 
    scanf("%d", &numIn) ;
    return numIn;
}

int sqr (int x) {
    return x * x;
}

int printone (int x) {
    printf ("The value is: %d\n", x) ;
    return 0;
}