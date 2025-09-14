#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str1[105], str2[105];
    char* ptr = NULL;
    char* sub = NULL;
    short int state = 1;
    scanf("%[^\n]",str1);
    while (state) {
        ptr = str1;
        sub = str2;
        state = 0;
        while (*ptr) {
            if ( *ptr == *(ptr + 1) || *ptr == *(ptr - 1) ) {
                state = 1;
            } else {
                *sub = *ptr;
                sub++;
            }
            ptr++;
        }
        *sub = '\0';
        if (state == 0) {
            break;
        }
        printf("%s\n",str2);
        strcpy(str1,str2);
    }
    return 0;
}