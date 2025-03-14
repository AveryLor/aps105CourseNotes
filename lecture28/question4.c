#include <stdio.h>
#include <stdbool.h> 

void recurCount(int num);


int main(void) {
    recurCount(10); 
    return 0; 
}

// This is a fifo type of algorithm, first in first out
void recurCount(int num) {
    if (num == 1) {
        printf("Counting up 1\n");
        return; 
    }
    printf("Count Down: %d\n", num); // Print should come first in FIFO
    recurCount(num - 1);

    // Review the second part, every thing after the recur is fifo
    if (num % 2 == 0) {
        printf("Counting up: %d\n", num/2);
    }
}

int max(int a[], int size) {
    if (size == 1) {
        return a[0]; 
    }
    int temp = max(a + 1, size - 1);
    if (temp > a[0]) {
        return temp; 
    }
    return a[0];
}

bool compareLines(const char* lineOne, const char* lineTwo) {
    while (lineOne == ' ' || lineOne++) {
        if (lineOne == '\0' && lineTwo == '\0') {
        
        }
    }

}