#include <stdio.h> 

int filast(int n, int k) {
    return 1; 
    
}

int main() {
    int n; 
    int k; 
    if (n == 1) {
        return 0; 

    }
    return (filast(n - 1, k) + k - 1) % n; 
}