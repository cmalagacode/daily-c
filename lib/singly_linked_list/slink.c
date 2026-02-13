#include "slink.h"
#include <stdlib.h>

void insert(struct SinglyLinkedList* list, int data) {
    if (list->size == 0) {
        struct Node* node = malloc(sizeof(struct Node));
        node->next = nullptr;
        list->head = node;
        list->tail = node;
        list->size++;
        return;
    }
    struct Node* node = malloc(sizeof(struct Node));
    node->data = data;
    node->next = nullptr;
    list->tail->next = node;
    list->tail = node;
    list->size++;
}

bool delete(struct SinglyLinkedList* list, const int val) {
    if (list->size == 0) return false;
    struct Node* curr = list->head;
    while (curr != nullptr) {
        if (curr->next != nullptr && curr->next->data == val) {
            struct Node* del_node = curr->next;
            curr->next = del_node->next;
            free(del_node);
            list->size--;
            return true;
        }
    }
    return false;
}
