#ifndef SLINK_H_
#define SLINK_H_

struct Node {
    int data;
    struct Node* next;
};

struct SinglyLinkedList {
    struct Node* head;
    struct Node* tail;
    int size;
};

void insert(struct SinglyLinkedList* list, int data);
bool delete(struct SinglyLinkedList* list, int val);


#endif