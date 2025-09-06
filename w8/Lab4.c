#include <stdio.h>
#include <stdlib.h>

int main() {
    char *str = NULL;
    char scan;
    int size = 0;
    int capacity = 1;

    str = (char*) malloc(sizeof(char) * capacity);
    scanf(" %c", &scan);
    while (scan != '-') {
        *(str + size++) = scan;
        if (size >= capacity) {
            capacity *= 2;
            char *temp = (char*) realloc(str, sizeof(char) * capacity);
            str = temp;
        }
        scanf(" %c", &scan);
    }

    char *ptr = str;
    while (ptr < str + size) {
        printf("%c", *ptr++);
    }
    if (size != 0) {
        printf("\n");
    }
    ptr = str + size - 1;
    while (ptr >= str) {
        printf("%c", *ptr--);
    }
    free(str);
    return 0;
}