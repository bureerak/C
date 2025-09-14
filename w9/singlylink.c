#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// DataNode structure using typedef
typedef struct DataNode {
    char* data;
    struct DataNode* next;
} DataNode;

// SinglyLinkedList structure using typedef
typedef struct SinglyLinkedList {
  unsigned int count;
  DataNode* head;
} SinglyLinkedList;

// Create a new DataNode
DataNode* createDataNode(char* data) {
    DataNode* newNode = (DataNode*)malloc(sizeof(DataNode));
    newNode->data = (char*)malloc(strlen(data) + 1);
    strcpy(newNode->data, data);
    newNode->next = NULL;
    return newNode;
}

SinglyLinkedList* createSinglyLinkedList() {
    SinglyLinkedList* linklist = (SinglyLinkedList*) malloc (sizeof(SinglyLinkedList));
    linklist->count = 0;
    linklist->head = NULL;
    return linklist;
}

// Insert a new node at the end of the list
void insert_last(SinglyLinkedList* list, char* data) {
    struct DataNode* pNew = createDataNode(data);
    if (list->count == 0) {
        list->head = pNew;
    } else {
        DataNode* ptr = list->head;
        while (ptr->next != NULL) {
            ptr = ptr->next;
        }
        ptr->next = pNew;
    }
    list->count++;
}

// Traverse the list and print data
void traverse(SinglyLinkedList* list) {
    if (list->count == 0) {
        printf("This is an empty list.\n");
        return;
    }
    struct DataNode* pointer = list->head;
    while (pointer->next != NULL) {
        printf("%s -> ",pointer->data); // ปริ้นข้อมูลและขยับ pointer ไปเรื่อยๆ จนถึงโหนดตัวสุดท้าย
        pointer = pointer->next;
    }
    printf("%s\n", pointer->data);
}

void insert_front(SinglyLinkedList* list, char* data) {
    DataNode* pNew = createDataNode(data);
    if (list->count == 0) {
        list->head = pNew; // ถ้า Linked List ว่างให้เปลี่ยนตำแหน่ง list->head ไปที่ pNew
    } else {
        pNew->next = list->head; // เปลี่ยนตำแหน่งของ pNew.next ไปที่โหนดตัวแรกสุดและเปลี่ยนตำแหน่ง head node ไปที่ pNew
        list->head = pNew;
    }
    list->count++;
}

void delete(struct SinglyLinkedList* list, char* data) {
    struct DataNode* current = list->head;
    struct DataNode* previous = NULL;

    while (current != NULL && current->next != NULL && strcmp(data,current->data) != 0) {
        previous = current;
        current = current->next;
    }

    if (current == NULL) {
        printf("Cannot delete, %s does not exist.\n",data);
        return;
    }

    if (previous == NULL && strcmp(data,current->data) == 0) {
        list->head = current->next;
    } else if (current->next != NULL && strcmp(data,current->data) == 0) {
        previous->next = current->next;
    } else if (previous != NULL && strcmp(data,current->data) == 0) {
        previous->next = NULL;
    } else {
        printf("Cannot delete, %s does not exist.\n",data);
        return;
    }

    free(current->data);
    free(current);

    list->count--;
}

int main() {
    SinglyLinkedList* mylist = createSinglyLinkedList();
    int n;
    char condition;
    char data[100]; // Assuming a maximum string length of 99 characters
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf(" %c: %[^\n]s", &condition, data); // Read condition and string data

        if (condition == 'F') {
            insert_front(mylist, data);
        } else if (condition == 'L') {
            insert_last(mylist, data);
        } else if (condition == 'D') {
            delete(mylist, data);
        } else {
            printf("Invalid Condition!\n");
        }
    }

    traverse(mylist);
    // Remember to free allocated memory for each node's data
    DataNode* current = mylist->head;
    while (current != NULL) {
        free(current->data);
        DataNode* temp = current;
        current = current->next;
        free(temp);
    }
    free(mylist);
    return 0;
}