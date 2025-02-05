#include <stdio.h> 

// Given an array of integers, move all the zero elementes ot the end while maintaining the relative order of the non-zero elements.

int main() {
    int data[13] = {1,0,4,0,6,0,8,9,0,-1,0,20,30}; 
    int numZeroes = 0; 
    int readIndex = 0; 
    int writeIndex = 0;

    for (readIndex = 0; readIndex < 13; readIndex++) {
        if (data[readIndex] != 0) {
            data[writeIndex++] = data[readIndex]; 
        }
    }
    for (;writeIndex<13;writeIndex++) {
        data[writeIndex] = 0;
    }

    return 0; 
}