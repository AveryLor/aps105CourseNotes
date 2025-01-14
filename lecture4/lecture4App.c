#include <stdio.h> 

int main() {
    int x = 5;
    ++x; 
    printf("x = %d\n", ++x);
    // The value of x++ is x
    // The value of ++x is x + 1
    // An assignment into x does not yet assign a new value, you cannot print the new value ofthe expression
    // sizeof is an operator that evaluates the number of bytes needed to store a data type 
    // sizeof(int) evaluates to 4 (per int)
    // sizeof(double) evaluates to 8 (per double)
    return 0; 
}