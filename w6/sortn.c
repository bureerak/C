#include<stdio.h>
#include<ctype.h>
#include<string.h>
int main(){

    char name[20][65] = {0};
    char inp[65];
    char buffer[65] = {0};
    char c;
    int j, state;

    for ( int i = 0 ; i < 20 ; i++ ) {
        j = 0;
        state = 1;
        scanf(" %[^\n]",inp);
        while (inp[j] != '\0') {
            if (state && isalpha(inp[j])) {
                inp[j] = toupper(inp[j]);
                state = 0;
            } else { inp[j] = tolower(inp[j]); }
            if (inp[j] == ' ') { state = 1;}
            j++;
        }
        strcpy(name[i],inp);
    }

    for ( int k = 0 ; k < 19 ; k++ ) {
        for ( int l = 0 ; l < 19 - k ; l++) {
            if (strcmp(name[l],name[l+1]) > 0) {
                strcpy(buffer,name[l+1]);
                strcpy(name[l+1],name[l]);
                strcpy(name[l],buffer);
            }
        }
    }

    for (int g = 0; g < 20; g++) {
        printf("%s\n", name[g]);
    }
    return 0;
}