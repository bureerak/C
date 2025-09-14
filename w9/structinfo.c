#include <stdio.h>
#include <string.h>

int main() {
    struct Student_info {
        char name[65];
        char surname[65];
        char sex[8];
        int age;
        char id[15];
        float gpa;
    } student_info;

    scanf(" %s %s %s %d %s %f", student_info.name,student_info.surname,student_info.sex,&student_info.age,student_info.id,&student_info.gpa);
    printf("%s ", strcmp(student_info.sex,"Male") == 0 ? "Mr" : "Miss");
    printf("%c ",student_info.name[0]);
    printf("%s ",student_info.surname);
    printf("(%d) ",student_info.age);
    printf("ID: %s ",student_info.id);
    printf("GPA %.2lf",student_info.gpa);
    return 0;
}