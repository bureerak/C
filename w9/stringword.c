#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

int main(){
    char str[155];
    scanf("%[^\n]",str);
    char* ptr = str;
    int num = 0;
    while (*ptr) {
        if (*ptr == ' ' || *(ptr+1) == '\0') {num++;}
        ptr++;
    }
    printf("%d words\n----\n", num);

    num = 0;
    ptr = str;
    char* sub = str;
    while ( ptr <= str + strlen(str) && strlen(str) != 0) {
        if(*ptr == ' ' || *ptr == '\0') {
            num = ptr - sub;
            for (int i = 0; i < num; i++) {
                printf("%c",tolower(*(sub + i)));
            }
            (*ptr == '\0') ? printf(" : %d",num) : printf(" : %d\n",num);
            sub = ptr + 1;
        }
        ptr++;
    }

    return 0;
}