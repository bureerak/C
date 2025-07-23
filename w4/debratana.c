#include <stdio.h>

int main() {
    double num;
    scanf("%lf",&num);
    if (num > 58.855) {
        printf("InValid");
    } else if (num > 52.900) {
        printf("Chon Buri");
    } else if (num > 35.477) {
        printf("Chachoengsao");
    } else if (num > 5.032) {
        printf("Samut Prakarn");
    } else if (num >= 0) {
        printf("Bangkok");
    } else {
        printf("InValid");
    }
    return 0;
}