#include <stdio.h> 
#include <stdbool.h>

bool arrayInArray(int a[], int b[]) {
    bool found = false; 
    for (int i = 0; a[i] != -1; i++) {
        if (a[i] == b[0]) { // We found the sequence unless otherwise
            int j = 0;
            for (j = 0; b[j] != -1; j++) { 
                if (a[i+j] != b[j]) {
                    found = false;
                    break; 
                }
            }
            if (found && b[j] == -1) { // Making sure that you got to the end of B
                return true; 
            }
        }

    }
    return found; // Skeleton of the code complete
}


int main() {
    return 0; 
}