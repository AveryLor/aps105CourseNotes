#include <stdio.h> 
#include <stdbool.h>
// Every even integer greater than 2 is the sum of two prime numbers.

bool goldBachConjecture(int, int*, int*); 
int getUserInput(); 
bool isPrime(int); 
int nextPrime(int); 
void printMessages(bool, int, int); 


int main() {
    // Write C code here
    int x = getUserInput();
    int firstP, secondP; // Doesnt matter, since they are pointers
    bool holds = goldBachConjecture(x, &firstP, &secondP);
    printMessages(holds, firstP, secondP); 
    printf(""); 
    return 0; 
}

int getUserInput() {
    int x; 
    printf("Please enter an even integer greater than two.\n"); 
    scanf("%d", &x);
    while (x % 2 != 0 || x <= 2) { 
        printf("PLEASE PLEASE PLEASE enter an even INTEGER greater than two.\n"); 
        scanf("%d", &x);
    } 
    return x;  
}

bool isPrime(int x) {
    if (x == 2 || x == 3) {
        return true;
    }
    for (int i=2; i<x; i++) {
        if (x % i == 0) { // Look at if any integer can cleanly divide into it
            return false;
        } 
    }
    return true; 

}

int nextPrime(int x) { // Only when x isPrime
    x++; 
    while (!isPrime(x)) {
        x++; 
    }
    return x; 
}

bool goldBachConjecture(int x, int* y, int*z) {
    int firstP, secondP; 
    firstP = 2; 
    secondP = x - firstP; // Gives a potential second number
    if (isPrime(secondP)) { // Make sure that its a prime number
        *y = firstP; 
        *z = secondP; 
        return true; 
    }
    while (firstP <= secondP) { // As long as you do half of hte program
        firstP = nextPrime(firstP); // Go to the next prime number
        secondP = x - firstP; // Get the next second prime number again
        if (isPrime(secondP)) { // Until you find a prime number
            return true; 
        }
    }
    return false; // Make sure that there is some false

}

void printMessages(bool x, int y, int z) {
    if (x) {
        printf("It holds! %d%d", y, z); 
    } else {
        printf("It does not hold!");
    }
        
}