/*
Linear Search 

Linear search is a very simple search algorithm. It is called lienar search because it searches the list in a linear 
fashion, checking each element in sequence until the desired element is found or until all the elmenets have been searched and the desired elemnt 
was not found. 

The algorithm for linear search is as follows: 

1. Start at index = 0
2. Check if list[index] == desired element in varaible item 
3. If found, return index
4. Otherwise, increment index by 1 
5. Repeat steps 2-4 until index is equal to the length of the list (or the element is found)
*/

int sequentialSearch(int list[], int listLength, int item) {
    for (int i = 0; i < listLength; i++) {
        if (list[i] == item) {
            return i; 
        }
    }
    return -1; 
}

// If item is found, the algorithm returns hte index of the element in the list in line 4. 
/*
If item is not found, the algorithm returns -1 in line 7. 

In the following example, we look for the element 7 in the array.


*/