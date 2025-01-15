#include <stdio.h> 
#include <math.h>
#include <stdlib.h>

int main() {
    unsigned int seed;
    /*
    double x, y; 
    printf("Enter two numbers (x and y) for remainder calculation (x/y): \n"); 
    scanf("%lf %lf", &x, &y);

    // Calculating the remainder of the two 
    double remainder = fmod(x, y);
    printf("The remainder of %lf divided by %lf is %lf\n", x, y, remainder);
    */

    double z = 2.5; // Rounds down at 2.5 instead for some reason
    printf("%d", (int) rint(z)); 

    double f = 3.66;
    printf("%.1f\n", ((int)(f * 10 + 0.5)) / 10.0); // Rounds to 1 decimal place
    scanf("%u", &seed);
    //srand(seed);
    //rand() % 6 + 1; // Generates a random number between 1 and 6
    return 0; 
}