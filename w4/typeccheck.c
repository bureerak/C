#include <stdio.h>
#include <ctype.h>

int main() {
    char c;
    scanf("%c" , &c);
    if (isdigit(c)) {
        printf("number");
    } else if ( isupper(c) ) {
        printf("uppercase");
    } else if ( islower(c) ) {
        printf("lowercase");
    } else {
        printf("error");
    }
    return 0;
}