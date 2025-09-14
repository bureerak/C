#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Student_info {
        char name[65];
        char surname[65];
        char sex[8];
        int age;
        char id[15];
        float gpa;
    };

void sortName(struct Student_info* s) {
    struct Student_info buffer;
    for (int i = 0; i < 20 - 1; i++) {
        for (int j = 0; j < 20 - i -1; j++) {
            if ( strcmp(s[j].name,s[j+1].name) > 0 ) {
                buffer = s[j+1];
                s[j+1] = s[j];
                s[j] = buffer;
            }
        }
    }
}
void sortLast(struct Student_info* s) {
    struct Student_info buffer;
    for (int i = 0; i < 20 - 1; i++) {
        for (int j = 0; j < 20 - i -1; j++) {
            if ( strcmp(s[j].surname,s[j+1].surname) > 0 ) {
                buffer = s[j+1];
                s[j+1] = s[j];
                s[j] = buffer;
            }
        }
    }
}
void sortID(struct Student_info* s) {
    struct Student_info buffer;
    for (int i = 0; i < 20 - 1; i++) {
        for (int j = 0; j < 20 - i -1; j++) {
            if ( atoi(s[j].id) > atoi(s[j+1].id) ) {
                buffer = s[j+1];
                s[j+1] = s[j];
                s[j] = buffer;
            }
        }
    }
}

int main() {
    struct Student_info student_info[20];
    char choice[12];
    for (int i = 0; i < 20; i++) {
        scanf(" %s %s %s %d %s %f", student_info[i].name,student_info[i].surname,student_info[i].sex,&student_info[i].age,student_info[i].id,&student_info[i].gpa);
    }
    scanf(" %s",choice);
    if (strcasecmp(choice,"name") == 0) {sortName(student_info);}
    else if (strcasecmp(choice,"surname") == 0) {sortLast(student_info);}
    else {sortID(student_info);}
    for (int i = 0; i < 20; i++) {
        printf("%s ", strcmp(student_info[i].sex,"Male") == 0 ? "Mr" : "Miss");
        printf("%c ",student_info[i].name[0]);
        printf("%s ",student_info[i].surname);
        printf("(%d) ",student_info[i].age);
        printf("ID: %s ",student_info[i].id);
        printf("GPA %.2lf",student_info[i].gpa);
        printf("\n");
    }

    return 0;
}