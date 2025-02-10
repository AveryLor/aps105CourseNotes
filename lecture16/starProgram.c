#include <stdio.h> 

int main() {
    int x; 
    scanf("%d", &x); 
    for (int row = 1; row<=x; row++) {
        for (int col = 1; col<=x; col++) {
            if (row == 1 || row == x || row == col || row + col - 1 == x) {
                printf("*"); 
            } else {
                printf(" "); 
            }
        }
    }

}