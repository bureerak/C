#include <stdio.h>

int main() {
    char str[155];
    scanf("%[^\n]",str);
    char *ptr = str;
    while (*ptr) {
        if (*ptr == ' ') {
            ptr++;
            continue;
        }
        printf("%c",*ptr);
        ptr++;
    }
    return 0;
}