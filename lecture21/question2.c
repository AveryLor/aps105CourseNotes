#include <stdio.h> 
#include <stdbool.h> 

bool isMagicSquare(int n, int square[][n]);

int main() {


    return 0; 
}

bool isMagicSquare(int n, int square[][n]) {
    int rowSum = 0;
    int colSum = 0;
    int digSum = 0; 

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (square[i][j]) {

            }
        }
    }

}



bool isMagicSquare(int n, int square[][n]) {
    int sum = 0; 
    for (int i = 0; i < n; i++) {
        sum += square[0][i]; 
    }

    // obtain the sum of each row
    for (int i = 0; i < n; i++) {
        int newsum = 0;
        for (int j = 0; j < n; j++) {
            newsum += square[i][j];
        }
        if (sum != newsum) {
            return false; 
        }
    }
    

    // obtain the sum of each column 
    for (int i = 0; i < n; i++) {
        int newsum = 0;
        for (int j = 0; j < n; j++) {
            newsum += square[j][i];
        }
        if (sum != newsum) {
            return false; 
        }
    }

    // obtain the sum of the diagonals
    int sum1 = 0; 
    for (int i = 0; i < n; i++) {
        sum1 += square[i][i];
    }

}