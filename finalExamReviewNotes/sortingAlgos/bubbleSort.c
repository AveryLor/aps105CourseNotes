// Bubble sort

/*
Bubble sort is a simple sorting algorithm that works by repeatedly stepping through a list, 
comparing each pair of adjacent elmeent and swapping them if they are in the wrong order. The process is repeated 
until the entire list is sorted. The algorithm gets its name because the smaller elements "bubble" to the top of the list
, while the larger elements "sink" to the bottom. 

Bubble sort works as follows: 
- In the first iteration, compare the first elmenet with the second element. If the first element is greater than the second element, 
swap them. Otherwise, do nothing. Then, compare the second element with the third element. If the second element is greater than the third element
, swap them. Otherwise, do nothing. The process repeats till the last element of the array. After the first iteration, the last element of the array is sorted, 
and is holding the maximum element of the array. 
*/

#include <stdio.h> 
#include <stdbool.h> 

void bubbleSort(int A[], int n); 
void printArray(int list[], int n); 

int main() {
    int list[4] = {2, 5, 3, 1};
    bubbleSort(list, 4);
    printArray(list, 4);
    return 0; 
}

void printArray(int list[], int n) {
    for (int i = 0; i < n; i++) {
      printf("%d ", list[i]);
    }
    printf("\n");
  }

void bubbleSort(int A[], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (A[i] > A[j]) {
                int temp = A[i]; 
                A[i] = A[j]; 
                A[j] = temp; 
            }
        }
    }
}

void bubbleSort(int list[], int n) {
    bool sorted = false; 
    
    for (int top = n - 1; top > 0 && !sorted; top--) {
        sorted = true; 
        for (int i = 0; i < top; i++) {
            if (list[i] > list[i + 1]) {
                swap(&list[i], &list[i + 1]); 
                sorted = false; 
            }
        }
        printf("After iteration %d: ", n - top); 
        printArray(list, n); 
    }
}

void bubbleSort(int list[], int n) {
    bool sorted = false;
  
    for (int top = n - 1; top > 0 && !sorted; top--) {
      sorted = true;  // Assume the array is sorted, and we'll prove if it's not
  
      // Compare adjacent elements
      for (int i = 0; i < top; i++) { // Reducing top eery time reduces the amount that has to be searched which is valid, but I like the two sum algo way more than this shite
        if (list[i] > list[i + 1]) {
          swap(&list[i], &list[i + 1]);
          sorted = false;  // If we had to swap, it means the array isn't sorted
        }
      }
      printf("After iteration %d: ", n - top);
      printArray(list, n);
    }
  }