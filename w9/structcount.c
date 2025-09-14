#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    struct Count {
    int alpha;
    int words;
    int line;
    };

    struct Count count = {0,0,0};
    char str[455];
    char* ptr;
    while (1) {
        scanf(" %[^\n]", str);
        if (strcmp(str,".") == 0) { break; }
        count.line++;
        ptr = str;
        while (*ptr) {
            if ( isalpha(*ptr) ) count.alpha++;
            if (*ptr == ' ' || *(ptr+1) == '\0') count.words++;
            ptr++;
        }
    }
    printf("Char = %d, word = %d, line = %d",count.alpha,count.words,count.line);
    return 0;
}