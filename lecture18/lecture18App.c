#include <stdio.h> 
#include <stdlib.h>

int* foo() {
    int *p = malloc(sizeof(int)); 
    *p = 0; 
    return p; 
}

int main() {
    int* x = foo(); 
    printf("%d\n", *x); 
    return 0; 
}

// If there's no more memory in the hype malloc returns NULL