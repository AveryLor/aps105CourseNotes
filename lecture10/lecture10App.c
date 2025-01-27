#include <stdio.h> 

void printTriangle(int numberRows); // You need to use the function prototype first
void printRow(int numRows); // You need to use the function prototype first

int main() {
    printTriangle(5); // You need to define this function as well
    return 0; 

}

void printTriangle(int numberRows) {
    for (int i = 1; i<=numberRows; i++) {
        printRow(i); // You need to define this function as well
    }
}

void printRow(int numRows) {
    for (int i = 1; i<=numRows; i++) {
        printf("*");
    }
    printf("\n");
}