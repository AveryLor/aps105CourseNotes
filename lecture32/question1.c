#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h> 

// Define the Node structure
typedef struct Node {
    int data;
    struct Node* next;
} Node;

// Define the LinkedList structure
typedef struct LinkedList {
    Node* head;
} LinkedList;

// Function to find the previous node of a given key
Node* prevSearch(LinkedList list, int key) {
    if (list.head == NULL || list.head->next == NULL) {
        return NULL; // No previous node if list is empty or has only one element
    }

    Node* current = list.head;
    while (current->next != NULL) {
        if (current->next->data == key) {
            return current; // Return the node before the key
        }
        current = current->next;
    }

    return NULL; // Key not found or it’s the first node
}

// Helper function to add a node at the beginning of the list
void insertFront(LinkedList* list, int data) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = data;
    newNode->next = list->head;
    list->head = newNode;
}

// Helper function to print the linked list
void printList(LinkedList list) {
    Node* current = list.head;
    while (current != NULL) {
        printf("%d -> ", current->data);
        current = current->next;
    }
    printf("NULL\n");
}

// Main function to test the implementation
bool isCycle(LinkedList *list) {
    Node* current = list->head; 
    if (current != NULL) {
        current = current->next;
        while (current != NULL && current != list->head) {
            current = current->next;
        } return (current == list->head);
    } else {
        return false; 
    }
}