#include <stdio.h>
#include <ctype.h>

int main() {
    char str[2002];
    scanf("%[^\n]",str);
    char* ptr = str;
    short int fst = 1;
    while (*ptr) {
        if (tolower(*ptr) == 'c' && tolower(*(ptr+1)) == 'a' && tolower(*(ptr+2)) == 't') {
            if (fst) {
                fst = 0;
            } else {
                printf(", ");
            }
            printf("%d", ptr - str);
        }
        ptr++;
    }
    return 0;
}