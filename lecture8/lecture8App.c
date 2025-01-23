#include <stdio.h> 

int main() {
    int n = 50; 
    // How many ones inthe binary representaiton of n
    int howManyOnes = 0; 

    while (n) {
        /*
        if (n & 2) {
            howManyOnes++; 
        }
        */
       if (n & 0x1) {
            howManyOnes++;
       }
        n /= 2; 
    }
    printf("%d\n", howManyOnes);
    return 0; 
}