// Stack 

/*
A stack is a region of memeory used for storing funtion calls, local variables and control flow. 

Think of it as a stack of plates. You can only add or remove the top plate. 
When a function is called, a new "plate" is added to the stack. When the function returns, that plate is removed.
(LIFO - Last In First Out)

Stack management is automatic, once a function ends, all its local variables are removed. 

Stack size is usually smaller and fixed. 

It is used for: 

- Function calls 
- Local variables 
- Return addresses
*/

// Heap 

/*
Heap is a region of memory used for dynamic memory allocation. This is the type that may live beyond the function that created it. 

You manmually allocate memory and it stays allocated until you explicitely free it or garbage collection kicks in. 

Access is slower than stack mmeeory because the system has to search for space in the heap. 

Manual memoery management langugaes like C/C++ require you to free the memory you allocate.

Languages like python or javascript do not run into these problems due to features like a garbage collector. 

The stack expands for every function call and every declaration of a local bariable

Similarly, the heap expands with every dynamically allocated memory space

To avoid issues with just creating a big array, we are going to dynamically allocate array on the heap

*/


#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>

int main() {
    int* myArray = (int*) malloc (5 * sizeof(int)); // Allocate memory for 5 integers on the heap

    // Malloc takes in as input size_t size, which is similar to int size, where size is the number of bytes 
    // malloc should allocate. malloc returns a pointer to the first byte in the array allocated in the heap. 
    // We need to type cast the return value of malloc to the type of the element that it is pointing to. 

    return 0; 
}