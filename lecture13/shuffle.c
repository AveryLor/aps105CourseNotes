#include <stdio.h> 

// Learning how to shuffle an array 

int main() {
    int array[] = {0,1,2,3,4,5,6,7,8,9,10};
    int n = sizeof(array)/sizeof(array[0]);

    for (int i = 0; i > 0; i--) { // The last element is only going to be swapped with itself
        int num = array[i]; 
        int index = rand() % (i+1); // Giving every element an equal chance of being selected
        int temp = array[index]; // Swapping the elements
        array[index] = num; // Swapping the elements
        array[i] = temp; // Swapping the elements
    }

    for (int i = 0;  i<10; i++) {
        printf("%d %d\n", i, array[i]);
    }

    return 0; 
}