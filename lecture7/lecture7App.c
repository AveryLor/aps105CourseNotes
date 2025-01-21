#include <stdio.h> 

int main() {
    int a,b,c; 
    printf("Please enter three integer\n"); 
    scanf("%d %d %d",&a,&b,&c);
    int largest; 
    if (a >= b) {
        if (a >= c) {
            largest = a; 
        } else {
            largest = c;
        }
    } else {
        if (b >= c) {
            largest = b; 
        } else {
            largest = c; 
        }
    }

    if (a >= b && a >= c && printf("4\n")) { // It will get printed it if gets evaluated; however, with ands if it never does
        largest = a; 
    }
    if (b >= a && b >= c) {
        largest = b;
    }
    largest = (a >= b) ? a : b; // This is the same as the above if-else statement, using a ternary operator


    printf("The largest number is %d\n",largest);

    return 0; 
}