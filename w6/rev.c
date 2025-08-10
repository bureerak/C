#include<stdio.h>
int main(){
    char str1[101];
    short count = 0;
    scanf("%[^\n]",str1);
    while (str1[count] != '\0') {
        count++;
    }
    while (count>0) {
        printf("%c",str1[--count]);
    }
    return 0;
}