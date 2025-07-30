#include <stdio.h>

int main() {
    char c;
    scanf("%c",&c);
    if (c > 90) {
        c -= 32;
    }
    switch (c) {
        case 'S':
            printf("Soft");
            break;
        case 'M':
            printf("Medium");
            break;
        case 'H':
            printf("Hard");
            break;
        case 'I':
            printf("Intermediate");
            break;
        case 'W':
            printf("Wet");
            break;
    }
    return 0;
}