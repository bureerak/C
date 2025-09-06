#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, frequency, count = 0;
    scanf("%d %d", &n, &frequency);
    char *str = (char*) malloc(sizeof(char) * (n + 1));
    scanf(" %[^\n]", str);
    char *ptr = str;
    while (*ptr++) {
        count++;
    }
    ptr = str;
    while (ptr < str + count) {
        printf("%c", *ptr);
        ptr = ptr + frequency;;
    }
    return 0;
}