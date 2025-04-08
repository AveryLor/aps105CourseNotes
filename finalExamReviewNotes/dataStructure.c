// A data structure is a way to store data of different types using same variable name. 
/*
For example, we can define the data structure using the keyword struct as follows
*/

#include <stdbool.h> 
#include <stdlib.h> 

typedef struct Neuron {
    int neuronNum; 
    double input1, input2; 
    char areaName[20]; 

} Neuron; // This final statement setse this struct to the variable neuron 


int main() {
    Neuron neuron = {5,2.0,3.0,"Hello world"};
    // neuron is an allias for a data structure

    
    return 0; 
}

/*
Why is this invalid code

struct Employee {
    char name[20];
    int age;
    double salary;
    struct Employee subordinate[20];
} boss;

You are nesting an employee in an employee, creating an infinite loop since each employee has an employee and so on

*/

/*
A linked list is a fundamental data structure that is used to store a sequence of elements, and its purpose is to 
provide efficient insertions and deletions, especially when compared to arrays in some scenarios.
*/

typedef struct node {
    int data; // Holds the actual data within the node 
    struct node *next; // Holds the link to the next node in the linkedlist 
} Node; 

typedef struct list {
    Node* head; 
} LinkedList; 
/*
bool insertAtFront(Node* head, int value) {
    if (temp == NULL) {
        return false; 
    }
    temp->next = head; 
    head = temp; 
    return true; 
}
*/

bool insertAtFront(Node **headPtr, int value) {
    Node *temp = createNode(value);
    if (temp == NULL) {
      return false;
    }
    temp->next = *headPtr;
    *headPtr = temp;
    return true;
}

bool insertAtBack(LinkedList *list, int value) {
    Node *temp = createNode(value);
    if (temp == NULL) {
      return false;
    }
    Node *current = list->head;
  
    if (current == NULL) {
      // The list is empty, there is no difference between back/front.
      list->head = temp;
      return true;
    }
  
    // Traverse the list until we reach the last element.
    while (current->next != NULL) {
      current = current->next;
    }
  
    // current now points to the last element of the list.
    current->next = temp;  // Add a new node to the end.
    return true;
  }

bool insertIntoOrderedList(LinkedList *orderedList, int value) {
  Node *current = orderedList->head;

  if (current == NULL) {
    // The list is empty, insertion at front/back is the same thing.
    return insertAtFront(orderedList, value);
  }
  
  while (current->next->data < value ) {
    // The value to insert is larger than the next element in the list.
    // Move to the next element in the list.
    current = current->next;
  }

  Node *newNode = createNode(value);
  if (newNode == NULL) {
    // Could not allocate memory for a new node.
    return false;
  }

  // current may be the last element in the list, and it may also be the last
  // element in an ordered list that is less than value.

  // Link the rest of the list with this new node.
  // current->next is bigger than newNode so newNode should be inserted in front of current->next
  newNode->next = current->next; // Using current->next since you are inserting after current
  current->next = newNode; // Overwrite next with the new node, current->next's position is set to the new node now

  return true;
}

/*
void deleteBack(LinkedList *list) {
  if (list->head == NULL) {
    // The list is empty, there is nothing to delete.
    return;
  }

  if (list->head->next == NULL) {
    // There is only one node in this list.
    deleteFront(list);
    return;
  }

  Node *current = list->head;

  // Traverse the list until we reach the second last element.
  // Thanks to the previous if-statement, we know that list->head->next is
  // non-NULL.
  while (current->next->next != NULL) {
    current = current->next;
  }

  // current now points to the second last element of the list.
  free(current->next);  // Delete the last element of the list.
  current->next = NULL; // The second last element is now the last element.
}

int deleteAllNodes(LinkedList *list) {
  int numDeleted = 0;

  while (list->head != NULL) {
    deleteFront(list);
    numDeleted++;
  }

  // The list is now empty. Optionally, set it to NULL to confirm.
  // deleteFront already sets list->head to NULL.
  list->head = NULL;

  return numDeleted;
}
*/