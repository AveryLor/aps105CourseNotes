#include <stdio.h> 

void selectionSort(int A[], int listLength);
void printArray(int list[], int listLength); 
void swap(int *x, int *y); 

int main() {
    int list[] = {9, 5, 18, 8, 5, 2};
    selectionSort(list, 6);
    printArray(list, 6);  

    return 0; 
}

/*
Selection sort is a simple sorting algorithm that finds the minimum 
or maximum element from the unsorted part of the list and swap it with the last element of the unsorted part

For sorting in ascending order, the general idea of selection sort is to iterate through the array, and find the
maximum element from the unsorted part of the list, which is initially the entire array, then swap it with the last element 
of the unsorted array. This makes the last element of the array sorted, and the remaining elements of the array unsorted. The process 
repeats till the entire array gets sorted. 

For example, if only the last 3 elements of hte array are sorted holding the maximum 3 numbers of the array, 
we will look at the max number in the remaining of the arary excluding the lat 3 elements. This element will 
be swapped with the last elmeent from the unsorted array, excluding the last 3 elementes. This makes the last 4 elementes of the arary sorted, and 
holding the maximum 4 numbers of the entire array. 

Psuedocode 
- Set top to n - 1, where n is the length of the array
- Iterate elements from index 0 to top to find the largest element and place its index in indexOfLargest
- Swap element at the index top with elment at indexOfLargest. This places the largest elemenet at the end of the unsorted sub-array. 
- Decrement top by 1. 
- Repeat steps 2 to 4 will top is 0. 
*/

void selectionSort(int A[], int listLength) {
    for (int i = 0; i < listLength; i++) {
        for (int j = i + 1; j < listLength; j++) {
            if (A[j] < A[i]) {
                int temp = A[i]; 
                A[i] = A[j];
                A[j] = temp; 
            }
        }
    }

}

void printArray(int list[], int listLength) {
    for (int i = 0; i < listLength; i++) {
      printf("%d ", list[i]);
    }
    printf("\n");
}

void swap(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

void selectionSort(int list[], int n) {
    for (int top = n - 1; top > 0; top--) { // You start from the top
        // find largest from 0 to top
        int indexOfLargest = 0; 
        for (int i = 1; i <= top; i++) { // One going from the bottom
            if (list[i] > list[indexOfLargest]) {
                indexOfLargest = i; 
            }
        }
        
        // put largest at the top 
        swap(&list[indexOfLargest], &list[top]); 
        printf("AFter iteration %d: ", n - top); 
        printArray(list, 6);
    }
}

