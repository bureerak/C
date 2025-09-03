#include<stdio.h>
#include<ctype.h>
int main(){
    char str[301], c;
    int in[301];
    int point = 0, count = 0, point1 = 0;
    scanf("%[^\n] %c",str,&c);
    c = tolower(c);
    while (str[point] != '\0') {
        if ( tolower(str[point]) == c ) {
            in[point1] = point;
            point1++;
            count++;
        }
        point++;
    }
    if (count) {
        printf("There is/are %d \"%c\" in the above sentences.\nPosition: ",count,c);
        for (int i = 0; i < point1; i++){
            (i != point1 - 1) ? printf("%d, ",in[i] + 1) : printf("%d",in[i] + 1);
        }
    } else {
        printf("Not found.");
    }
    return 0;
}