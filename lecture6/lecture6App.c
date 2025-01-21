#include <stdio.h> 
#include <stdbool.h>

int main() {
    int x = 5;
    if (x == 5) {
        printf("x is 5\n");
    } else {
        printf("x is not 5\n");
    }
    bool type = false; 

    if (type); 
    printf("type is true\n");

    return 0; 
    if (type) // Yo do not necessarily need the curly braces, but you should probably use them
        printf("type is true\n");
    
}