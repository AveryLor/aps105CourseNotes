void printReverse() {
    int input;
    printf("Enter num:\n"); 
    scanf("%d", &input);
    if (input == 0) {
        printf("%d", input);
        return; // After return, it returns outside the function 
    }
    printReverse(input);
    printf("%d", input); // And jumps out here to print which allows you to print the reverse of the number
    // You are essentially making a call stack here
    // This is a lifo algorithm, last in first out
}