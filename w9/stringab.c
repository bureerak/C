#include <stdio.h>
int main() {
    char str[205];
    short int num = 1;
    scanf("%[^\n]",str);
    char* ptr = str;
    while (*ptr) {
        if (num) {
            printf("%c.",*ptr);
            num = 0;
        } else if (*ptr == ' ') {
            num = 1;
        }
        ptr++;
    }
    return 0;
}