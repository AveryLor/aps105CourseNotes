#include <stdbool.h> 
#include <stdio.h> 

// Define the Node structure
typedef struct Node {
    int data;
    struct Node* next;
} Node;

// Define the LinkedList structure
typedef struct LinkedList {
    Node* tail; 
    Node* head;
} LinkedList;

void remove(LinkedList* list, int value) {
    Node* prev = NULL; 
    Node* current = list->head; 
    while (current!= NULL) {
        if (current->data == value) {
            Node* next = current->next; 
            free(current); 
            if (prev == NULL) {
                list->head = next; 
            } else {
                prev->next = next;
            }
            if (next==NULL) {
                list->tail = prev; 
            }
        }
        prev = current;
        current = current->next;
    }
}

void removeTail(LinkedList* list) {
    Node* current = list->head; 
    Node* prev = NULL; 
    if (list->head == NULL) {
        return; 
    }
    while (current->next != NULL) {
        prev = current; 
        current = current->next; 
    }
}

void insertSequence(LinkedList* list, LinkedList* seq)  {
    Node* current = list->head; 
    Node* currentseq = seq->head; 
    if (seq->head == NULL) {
        return; 
    }
    if (list->head == NULL) {
        list->head = seq->head; 
    }
    if (seq->head->data < list->head->data) {
        seq->tail->next = list->head; 
        list->head = seq->head; 
    } else {
        while (current->next != NULL) {
            current = current->next;
        }
        Node* seqSlide = currentseq; 
        while (seqSlide->next != NULL) {
            seqSlide = seqSlide->next;
        }
        seqSlide->next = current->next; 
        current->next = currentseq;

    }
}