#include <stdio.h> 
#include <string.h> // This is the standard input output file that allows the program to print to the console

int main() {

    // Today we're are going to try to take both input and output from the user 

    int pizza;
    int slices; 
    printf("How many pizzas do you want:");
    scanf("%d", &pizza); // Add the adress, remember to use the format sepcifier, tell them the address, the ampersand gets the pizzas address automatically, its an operator
    slices = pizza * 6; // 6 slices per pizza
    printf("You have, %d slices", slices);
    return 0; // Terminates the execution of the program


}
