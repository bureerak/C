#include <stdio.h>

int main() {
    int M[] = {2, 20, 8, 10, 4, 6, 16, 18};
    int N[] = {1, 3, 9, 7, 11, 15, 19};
    short i = 0;
    short s = 0;
    while (i <= 0 || i > 20 ) {
        scanf("%hd",&i);
    }
    for (int n = 0; n < 8; n++) {
        if (i == M[n]) {
            printf("%hd is in M at index [%d]",i,n);
            s = 1;
        }
    }
    for (int k = 0; k < 7; k++){
        if ( i == N[k] ) {
            printf("%hd is in N at index [%d]",i,k);
            s = 1;
        }
    }
    if (!s) {
        printf("%hd is not in neither M nor N",i);
    }
    return 0;
}