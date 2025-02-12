#include <stdio.h> 

// This program finds the number of bits that you can store in a value

int main() {
    int k = 1; 
    int count = 0;
    while (k > 0) {
        k *= 2; // k = k << 1, this is how you would do it with bitwise operators
        count++; 
    } 
    printf("The final count is %d\n", count + 1);
}