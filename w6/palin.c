#include<stdio.h>
int main() {
    char str1[101] = {0}, str2[101] = {0};
    int n = 0, state = 1, j;

    scanf(" %s", str1);
    while (str1[n] != '\0') { n++; }
    n--;

    for (j = 0 ; n >= 0; n--,j++)
    {
        str2[j] = str1[n];
        if (str2[j] != str1[j])
        {
            state = 0;
            break;
        }
    }

    if (state)
    {
        printf("It is Palindrome.");
    } else {
        printf("It is not Palindrome.");
    }
    return 0;
}