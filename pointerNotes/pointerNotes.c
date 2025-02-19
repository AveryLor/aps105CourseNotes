#include <stdio.h> 

int main() {
    int x = 4; 
    int *p = &x; // Use * To initialize a pointer to that type, and then use the ampersand to get the address of the variable.
    int y = *p; // Use * to dereference a pointer, and get the value at that address.
    printf("x = %d\n", y);

}