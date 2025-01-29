#include <stdio.h> 

void swapFunction(a, b); 

int main() {
    int x = 5;
    {
        printf("x = %d\n", x);
    }
    return 0; 
}


// This is the logic for a swap function. 
void swapFunction(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;



    printf("%p\n", (void*)(a));
    printf("%p\n", *a); // Dereferencing a to get the value of a 
    int temp = a; 
    a = b; 
    b = temp; 
    return;

}