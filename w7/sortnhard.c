#include<stdio.h>
#include<string.h>
#include<ctype.h>

void format(char name[]) {
    int i = 0, state = 1;
    while (name[i] != '\0') {
        if (name[i] == ' ') {
            state = 1;
            i++;
            continue;
        }
        if (state) {
            name[i] = toupper(name[i]);
            state = 0;
        } else {
            name[i] = tolower(name[i]);
        }
        i++;
    }
}

int main() {
    int n;
    scanf("%d",&n);
    char name[n][65], buffer[65];
    for (int i = 0; i < n ; i++) {
        scanf(" %[^\n]",name[i]);
        format(name[i]);
    }
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i ; j ++) {
            if (strcmp(name[j],name[j+1]) > 0) {
                strcpy(buffer,name[j]);
                strcpy(name[j],name[j+1]);
                strcpy(name[j+1],buffer);
            }
        }
    }
    for (int j = 0; j < n ; j++) {
        printf("%s\n",name[j]);
    }
}