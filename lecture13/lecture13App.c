#include <stdio.h> 

int main() {
    // You have to initialize the number of items in an array, unless you manually set it
    // You can set the number of elements, but not initaizlie the actual elements
    // Using an array, use an index to go through an array
    int array[] = {1,2,3,4,5,6,7,8,9,10}; 
    int size = 10; 
    double average = 0.0; 
    int sum = 0;
    
    for (int i = 0; i < size; i++) {
        sum += array[i]; 
    }

    average = sum/10.0; 
    printf("The average of the array is: %f\n", average);

    // Getting the length of an array
    size_t length = sizeof(array) / sizeof(array[0]);
    // Remember that sizeof returns bytes


    return 0; 


    return 0; 
}