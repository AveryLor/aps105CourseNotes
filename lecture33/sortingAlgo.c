// Bubble Sort Algorithm
#include <stdbool.h> 

void bubbleSort(int arr[], int n) {
    int i, j, temp; 
    bool swapped; 
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            swapped = false; 
            if (arr[j] > arr[j + 1]) {
                temp = arr[j]; 
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swapped = true;
        }
        if (!swapped) {
            break; 
        }
    }
    }
}

// Best case is O(n)
// Worst case is O(n^2)
// Average case is O(n^2)

// Selection Sort Algorithm
// The selection sort algorithm will find the minimum in the array and put it at the front of the array
void selectionSort(int arr[], int n) {
    int i, j, minIndex, temp; 
    for (i = 0; i < n - 1; i++) {
        minIndex = i; 
        for (j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j; 
            }
        }
        temp = arr[i]; 
        arr[i] = arr[minIndex]; 
        arr[minIndex] = temp; 
    }
    if (minIndex != i) {
        temp = arr[i];
        arr[minIndex] = arr[i];
        arr[i] = temp; 
    }
 }

 // Best case is O(n) 
 // Worst case is O(n^2) 
 // Average case is O(n^2)

 void insertionSort(int arr[], int n) {
    int i, key, j; 
    for (i = 1; i < n; i++) {
        key = arr[i]; // Setting key at 1 since we moev based off of swapping from 0 
        j = i - 1; // 0 or the one before that
        
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j]; 
            j = j - 1; 
        }
        arr[j + 1] = key;
    }
 }

 // Best case is O(n)
 // Worst case is O(n^2)
 // Average case is O(n^2)

 // Stability 

 // A sorting algorithm is stable if it does not change the order of elements with the same value. 

 // Quick sort
/*
Select a pivot, first, last, middle or random element 

Move elements smaller than the pivot to the right
Move elements larger than the pivot to the left

Recurisvely Apply 
Sort left and right partitions

*/

void quicksort(int arr[], int low, int high) {
    if (low < high) {
        // Get pivot position
        int pivotIndex = partition(arr, low, high); 

        // Recursively sort elments before and after pivot
        quicksort(arr, low, pivotIndex - 1); 
        quicksort(arr, pivotIndex + 1, high);
    }
}

int partition
(int arr[], int low, int high) {
    int pivot = arr[high]; 
    int i = low - 1; 

    for (int j = low; j < high; j++) {
        if (arr[j] < pivot) {
            i++; 
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return (i + 1); 
}

// Time complexity: o(n log(n))
// Worse case : o(n^2) (when pivot is poorly chosen)