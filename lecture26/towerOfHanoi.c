// Tower of Hanoi 

// The tower of Hanoi is a classic mathematical puzzle involving three rods and a number of disks of different sizes. 

// Single move: Only one disk can be moved at a time 
// Disk Order: A disk can only be placed on top of a larger disk

// Three rods: User three rods, source auxillary and destination
// Base case: If there is only one disk, move it directly to the destination rod. 

// Recursive case:
// 1. Move n - 1 disks from the source rod to the auxiliary rod, so they are on top of each other.
// 2. Move the largest disk 

#include <stdio.h> 

void towerOfHanoi(int n, char source, char auxillary, char destination) {
    if (n == 1) {
        return; 
    }
    towerOfHanoi(n - 1, source, destination, auxillary);
    //towerOfHanoi(n - 1, auxillary, source, destination);
}

// Base case: If there is only one disk, move it directly to the destination rod.
// After that you have to move from source to desintation and then auxillary on top of source

int main() {



    return 0; 
}