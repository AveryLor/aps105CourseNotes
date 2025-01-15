#include <stdio.h> 
#include <math.h>

int main() {
    double x, y; 
    printf("Enter two numbers (x and y) for remainder calculation (x/y): \n"); 
    scanf("%lf %lf", &x, &y);

    // Calculating the remainder of the two 
    double remainder = fmod(x, y);
    printf("The remainder of %lf divided by %lf is %lf\n", x, y, remainder);
    return 0; 
}