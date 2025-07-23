#include <stdio.h>

int main(){
    float s;
    scanf("%f",&s);
    if (s > 100 || s < 0){
        printf("Out of Range");
    } else if (s >= 80) {
        printf("A");
    } else if (s >= 70 ){
        printf("B");
    } else if (s >= 60) {
        printf("C");
    } else if (s >= 50) {
        printf("D");
    } else {
        printf("F");
    }
    return 0;
}