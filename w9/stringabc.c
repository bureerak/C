#include <stdio.h>
#include <string.h>

int main() {
    char str[205], buffer;
    scanf("%s",str);
    int num = strlen(str);
    for (int i = 0; i < num - 1; i++) {
        for (int j = 0; j < num - i - 1; j++) {
            if (*(str + j) > *(str + j + 1)) {
                buffer = *(str + j + 1);
                *(str + j + 1) = *(str + j);
                *(str + j) = buffer;
            }
        }
    }
    printf("%s",str);
    return 0;
}