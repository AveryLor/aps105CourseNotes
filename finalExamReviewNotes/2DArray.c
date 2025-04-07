#include <stdio.h> 
#include <malloc.h>
#include <stdlib.h>

int main() {

    int myArray[2] = {1, 2}; 
    int* myArray2 = (int*) (malloc (2 * sizeof(int))); // Allocate memory for 2 integers on the heap
    int twoDimensionalArray[2][2] = {{1,2}, {3,4}}; 

    // The number of rows is not required as the compiler will fill the array row by row, i.e. in "row major" order. 

    // The following is a way to dynamically allocate a 2D array in C.

    #include <stdlib.h>

  // Dynamically allocate array of pointer
  int** arr = (int**)malloc(3 * sizeof(int*));
  
  // Dynamically allocate a 1D array for each row
  for (int row = 0; row < 3; row++) {
    *(arr + row) = (int*)malloc(4 * sizeof(int));
  }
  
  // Assign a value to each element
  for (int row = 0; row < 3; row++) {
    for (int col = 0; col < 4; col++) {
      *(*(arr + row) + col) = row * 4 + col + 1;
      // arr[row][col] =  row * 4 + col + 1;
    }
  }
  
  // Free the 1D arrays of rows first
  for (int row = 0; row < 3; row++) {
    free(*(arr + row));
    // OR
    // free(arr[row]);
    arr[row] = NULL;
  }
  
  // Then free the array of pointers
  free(arr);
  arr = NULL;
    

}

/*
If the number of rows is unknown, the number of columns is 3, and the array is initialized with 9 elements, the first row will have 3 elements
, the second row will have 3 elements and so on. Hence, the number of rows can be easily deduced if the number of columns and the elements are defined. To 
better understand "row major" order, let's dive deeper into how a 2D array works. 

The compiler will fill the array row by row, filling 2 columns in each row. Since the 
array is filled row by row, the number of columns is rewquired to know how many elements to put 
in each row. 

It simply calculate it out

Remember, you always need to specify the number of columns in a 2D array, but you don't need to specify the number of rows.
*/

