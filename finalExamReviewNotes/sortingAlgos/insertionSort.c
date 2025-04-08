int main() {
    return 0; 
}

// Insertion sort

/* 
The general idea of insertion sort is to iterate through the array, and insert 
each element into its correct position with respect to the elements that have already
been sorted. For example, if only the first 3 elements of the arary
are sorted, the fourth element will be inserted into its correct 
position with respect to the first 4 elements. This happens by shifting all elements 
that are greater than the fourth element to the right, and inserting A[top] 
in place of the left most element greater than the fourth element. 
This places the fourth element in its correct position with respect to the first 
four elements. 

Psuedocode
- Set top to 1 
- Set item to A[top] and ind to top
- If item is smaller than A[ind-1], then set A[ind] to A[ind - 1] and decrement ind
- Repeat 3 until ind is 0 or when item is no longer smaller than A[ind - 1]. This shifts 
all elementes that are greater than item to the right. 
- Now, chose the correct position for item by setting A[ind] to item. 
- In the next ieration, set top to top + 1, set item to A[top] and ind to top
- Repeat 3-6 until top is equal to listlength.

Work left ot right 
Examine each item and compare it to items on its left 
Insert the item in the correct position in the array 

*The array will form sorted and unsorted partitions
*/

void insertionSort(int A[], int listLength) {
    int top; 

    for (top = 1; top < listLength; top++) {
        int item = A[top]; 
        int ind = top; 

        // Shift all elements > item to the right
        // You essentially check all the items on the left until you
        // Find one where item is less than A, make sure index does not hit 0 
        while (ind > 0 && item < A[ind - 1]) {
            A[ind] = A[ind - 1]; // This shifts it to the right freeing up ind
            ind--; 
        }
        // Set the current index to the item, you popped out from the top of the while loop so you are currently on it
        A[ind] = item; 
        printf("After iteration %d: ", top); 
        printArray(A, listLength); 
    }
}