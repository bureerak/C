#include<stdio.h>
int main() {
    char code[] = {'a','b','x','y','p','q','r','m','n','c','e','d','k','l','j','o','s','h','t','u','f','v','z','g','w','i'};
    char encode[201];
    short point1 = 0, point2, upper = 0;
    scanf(" %[^\n]",encode);
    while (encode[point1] != '\0')
    {
        if (encode[point1] != ' ') {
            if (encode[point1] >= 'A' && encode[point1] <= 'Z') {
                encode[point1] += 32;
                upper = 1;
            }
            for (point2 = 0; point2 < 26; point2++) {
                if (encode[point1] == code[point2]) {
                    point2 = (point2 + 5) % 26;
                    point2 = point2 < 0 ? point2 + 26 : point2;
                    encode[point1] = code[point2];
                }
            }
            if (upper) {encode[point1] -= 32; upper = 0;}
        }
        point1++;
    }
    encode[point1] = '\0';
    printf("%s",encode);
    return 0;
}