// Binary Search 

/*
Binary Search 

Searching for an element in a sorted array is quick. Think of having a pile of booklets with names 
sorted in ascending order. Say you want to find the booklet with the name "Snerfu". You can start at the middle 
of the pile and check if the name is "Snerfu". If it is, you are odne. If it is not, you can discard the second 

Pseudocode 

- Set low = 0 and high to the length of the array
- Look at the element at the index: middle is equal to item, return middle
- If element at index middle is equal to item, return middle
- If element at index middle is less than item, the item could be in the sub-array. Set
low = middle + 1 to look at the right sub-array and go to step 2. 
- Otherwise, set high = middle - 1 to look at the left sub array and go to step 2. 
- If low > high, return -1 to indicate that item was not found. 
*/

int binarySearch(int list[], int listLength, int item) {
    int low = 0; // Beginning low value
    int high = listLength - 1; // Beginning high value
    int middle; 

    while (low <= high) { // When low meets high
        middle = (low + high) / 2; // Finding the current middle value between these two
        if (item == list[middle]) { // Lucky us we immediatley landed on middle
            return middle; // Return its value
        } else if (item < list[middle]) { // Go left, its smaller (assuming sorted in ascending order)
            high = middle - 1; // Start moving left of middle, reduce your high
        } else { // Start moving right of middle
            low = middle + 1; 
        }
    }
    return -1; 
}

