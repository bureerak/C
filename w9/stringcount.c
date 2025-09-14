#include <stdio.h>
#include <ctype.h>

int main(){
    char find;
    char text[155];
    int count = 0 ;
    scanf(" %c %[^\n]",&find,text);
    char *ptr = text;
    while (*ptr) {
        if (*ptr == tolower(find) || *ptr == toupper(find)) {count++;}
        ptr++;
    }
    printf("%d",count);
    return 0;
}