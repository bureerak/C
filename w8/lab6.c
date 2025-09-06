#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main() {
    char *str = (char*) malloc(sizeof(char  ) * 101);
    scanf(" %[^\n]", str);
    char *ptr = str;
    int upper = 0, lower = 0, digit = 0;
    while (*ptr) {
        if (isupper(*ptr)) upper++;
        else if (islower(*ptr)) lower++;
        else if (isdigit(*ptr)) digit++;
        ptr++;
    }
    printf("Lowercase letters: %d\n", lower);
    printf("Uppercase letters: %d\n", upper);
    printf("Digits: %d", digit);
    free(str);
    return 0;
}