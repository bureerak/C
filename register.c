#include <stdio.h>

int main() {
    char first[30],last[30],id[8];
    int day,year,month;
    float gpa;
    scanf("%s",first);
    scanf("%s",last);
    scanf("%s",id);
    scanf("%d/%d/%d", &day, &month, &year);
    scanf("%f", &gpa);
    printf("Fullname: %s %s\n", first, last);
    printf("ID: %s\n",id);
    printf("DOB: %02d-%02d-%04d\n", day, month, year);
    printf("GPA: %.2f", gpa);
    return 0;
}
