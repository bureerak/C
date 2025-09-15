#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct DataNode {
    char* data;
    struct DataNode* next;
} DataNode;

typedef struct Linklist {
    int count;
    DataNode* head;
} Linklist;

DataNode* getNode(char* data) {
    DataNode* new = (DataNode*) malloc (sizeof(DataNode));
    new->data = (char*) malloc (sizeof(data) + 1);
    strcpy(new->data,data);
    new->next = NULL;
    return new;
}

Linklist* create() {
    Linklist* list = (Linklist*) malloc (sizeof(Linklist));
    list->count = 0;
    list->head = NULL;
    return list;
}

void insert_last(Linklist* list,char* data) {
    DataNode* new = getNode(data);
    if (list->count == 0) {
        list->head = new;
    }
    else {
        DataNode* ptr = list->head;
        while (ptr->next != NULL) {
            ptr = ptr->next;
        }
        ptr->next = new;
    }
    list->count++;
}

int main() {
    char* input = (char*) malloc (sizeof(char) * 21);
    int num;
    Linklist* list = create();
    while (1) {
        scanf(" %s",input);
        if (strcmp(input,"Last") == 0) {break;}
        insert_last(list,input);
    }
    scanf("%d",&num);
    if (num > list->count - 1 || num < -list->count) {
        printf("Error");
    }
    else {
        if (num < 0 && num != -list->count) {
            num = num % list->count;
            num += list->count;
        }
        DataNode* ptr = list->head;
        for (int i = 0; i < num; i++) {
            ptr = ptr->next;
        }
        printf("%s",ptr->data);
    }
    return 0;
}