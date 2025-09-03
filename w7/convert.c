#include<stdio.h>
#include<string.h>
#include<ctype.h>
void convert(char name[],char cmp[]) {
    int pointer = 0;
    while (name[pointer] != '\0') {
        cmp[pointer] = name[pointer];
        cmp[pointer] = isupper(cmp[pointer]) ? tolower(cmp[pointer]) : cmp[pointer];
        name[pointer] = isupper(name[pointer]) && name[pointer] != ' ' ? tolower(name[pointer]) : toupper(name[pointer]);
        pointer ++;
    }
    cmp[pointer] = '\0';
}
int main() {
    char name1[105],name2[105];
    char name3[105],name4[105];

    scanf(" %[^\n] %[^\n]",name1,name2);
    convert(name1,name3);
    convert(name2,name4);
    printf("*** Results ***\n");
    printf("%s\n",name1);
    printf("%s\n",name2);
    printf("***************\n");

    if (strcmp(name3,name4) == 0) {
        printf("Both strings are the same.");
    } else {
        printf("Both strings are not the same.");
    }
    return 0;
}

