#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Book {
    char id[10];
    char name[100];
    char author[100];
};

int main() {
    int num;
    char id[10];
    scanf("%d",&num);
    scanf("%s",id);
    struct Book* shelf = (struct Book*) malloc (sizeof(struct Book) * num);
    for (int i = 0; i < num; i++) {
        scanf(" %s %s %s", (shelf+i)->id, (shelf+i)->name, (shelf+i)->author);
    }
    for (int i = 0; i < num; i++) {
        if ( strcmp( id,(shelf+i)->id ) == 0 ) {
            printf("%s %s %s",(shelf+i)->id,(shelf+i)->name,(shelf+i)->author);
            return 0;
        }
    }
    printf("Not Found");
    return 0;
}