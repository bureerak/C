#include <stdio.h>
#include <stdlib.h>

int main() {
    int count = 0;
    char *str = (char*) malloc(sizeof(char) * 101);
    scanf(" %[^\n]", str);
    while (*(str+count)) {
        count++;
    }
    char *ptr = str + count - 1;
    while (ptr >= str) {
        printf("%c", *ptr--);
    }
    free(str);
    return 0;
}