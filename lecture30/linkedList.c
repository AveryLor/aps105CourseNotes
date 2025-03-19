//  A linear data structure where elements (nodes) are linked using pointers. 

// 

#include <stdio.h>

typedef struct Node {
    int data; // data stored in the node (like 0x)
    struct Node* next; // pointer to the next node (020)
} Node;

void pushback(Node* head, int data) {
    Node* newNode = createNode(data); 
    Node* temp = head; // You must make sure that head is not null 
    while (temp -> next != NULL) { // Goes to the the last null (all the way until you have a null pointer)
        temp = temp -> next; 
    }
    temp -> next = newNode;
} // This function inserts a node in the back

void pushFront(Node** head, int data) {
    Node* newNode = createNode(data); // You create a new node with a set data
    newNode -> next = *head; // Set the next pointer to be the head
    head = newNode; // And then set head to the new node
}

typedef struct list {
    Node* head; 
    LinkedList;
};


// How can you detect a loop in a linked list?

// Floyd's cycle detection algorithm
void detectLoop(Node* head) {
    Node* slow = head; 
    Node* fast = head; 
    while (slow && fast && fast -> next) {
        slow = slow -> next; 
        fast = fast -> next -> next; 
        if (slow == fast) {
            printf("Loop detected\n");
            return; 
        }
    }
    printf("No loop detected\n");
}

// void freeLinkedList(linkedList *ll) {
//     Node* current = ll->head; 
//     Node* nextNode; 
//     while (current != NULL) {
//         nextNode = current -> next; 
//         free(current); 
//         current = nextNode; 
//     }
// }

int length(Node* head) {
    int count = 0; 
    Node* current = head; 
    while (current != NULL) {
        count++; 
        current = current -> next; 
    }
    return count; 
}

void insertAfter(Node *after, Node *node) {
    if (after == NULL || node == NULL)  return; 
    node->next = after -> next;
    after->next = node;
}

