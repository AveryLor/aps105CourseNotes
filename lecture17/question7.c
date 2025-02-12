#include <stdio.h> 

void pythagoreanTriples(int x) {
    for (int y = 1; y < 100; y++) {
        for (int z = y+1; z < x * x + y * y; z++) {
            printf(""); 
            return;
        } 

    }
    printf(""); 
}


int main() {

    return 0; 
}