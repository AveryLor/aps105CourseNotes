// Arrays are not passed by value, once you pass an array the information is lost, it becomes a pointer and returns 2 

#include <stdio.h> 
#include <stdbool.h>

bool findElement(int a[], int size, int element) {
    /*
    for (int i = 0; i < size; i++) {
        if (a[i] == element) {
            return true; 
        }
        return false; 
    }
    */
   int low = 0; 
   int high = size - 1; 
   while (low < high) {
    int index = low + (high - low) / 2; // Average + start
    int value = a[index];
    if (value == element) {
        return true;
    } else if (value < element) {
    low = index + 1; 
   } else {
    high = index - 1; 
   }
   }
   return -1; 
}

int max(int a[], int size) {
    int result = a[0];
    for (int i = 1; i < size; i++) {
        if (a[i] > result) {
            result = a[i];
        }
    }
    return result;
}

int main() {
    // Pass an array within the scope of a function, make sure that you do not pass it as a pointer otherwise array decay happens
    int array[1000]; 
    for (int i=0; i<1000; i++) {
        array[i] = rand()%10;
    }

    return 0; 
}

