#include <stdio.h>

int main() {
    // Initially though of what variables are required for this program
    const double TOLERANCE = 0.001; 
    double sum = 0.0; 
    double term = 1; 
    int n = 0; // number of terms

    // Know when you should stop for this type of program
    while (term > TOLERANCE) {
        n++; 
        sum += term; 
        term /= n; 
    }
    printf("The sum is : %f\n", sum);
    return 0; 
}