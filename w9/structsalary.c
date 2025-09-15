#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Record {
    char id[10];
    char name[100];
    long salary;
    long sales;
} Record;

int main() {
    int num;
    char id[10];
    scanf("%d",&num);
    Record* emp = (Record*) malloc (sizeof(Record) * num);
    for (int i = 0; i < num; i++) {
        scanf(" %s %s %ld %ld", (emp+i)->id, (emp+i)->name, &(emp+i)->salary, &(emp+i)->sales);
    }
    scanf(" %s",id);
    for (int i = 0; i < num; i++) {
        if (strcmp(id,(emp+i)->id) == 0) {
            printf("%s\n%s\n%ld\n%.2lf\n%ld\n%.2lf",(emp+i)->id,(emp+i)->name,(emp+i)->sales,(emp+i)->sales * 0.02,(emp+i)->salary,(emp+i)->salary + ((emp+i)->sales * 0.02));
            return 0;
        }
    }
    printf("ID not found !!!");
    return 0;
}