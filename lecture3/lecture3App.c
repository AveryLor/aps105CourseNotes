#include <stdio.h>
#include <string.h>

int main() {
    char userInput[20]; 
    int alex; 
    printf("Enter a string: ");
    scanf("%s", userInput);
    printf("Enter alex's age: "); 
    scanf("%d", &alex); // It will return 1, if you enter a string since it breaks
    printf("Alex's age is: %d\n", alex);
    printf("You entered: %s\n", userInput);
    int x = printf("Alex\n"); // The return value of printf is the number of characters printed
    printf("x: %d\n", x);
    return 0; 
}
// Escape sequence is just one character


// Decimals represent, an integer
// %d integer
// %s string
// %f float 
// %c character

/*
*/