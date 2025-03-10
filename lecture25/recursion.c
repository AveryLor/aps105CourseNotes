// A recursive function calls itself. 

// It consists of two main parts: 

// 1. Base case: The base case is the condition that stops the recursion.
// 2. Recursive case: The recursive case is the condition that calls the function again.


// The fibonnaci sequence is a series of numbers where each number is the sum of the two preceding ones, usually starting with 0 and 1. 

int fibonacci(int n) {
    if (n < 2) {
        return ; 
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

// It gets slinged all the way back

// The recursive case is the condition that calls the function again.

// Once you have the value its passed all the way back up. 


double power(double base, int exp) {
    if (exp == 0) {
        return 1; // Base case: any number raised to the power of 0 is 1
    } else if (exp < 0) {
        return 1 / power(base, -exp); // Handle negative exponent
    } else {
        return base * power(base, exp - 1); // Recursive case
    }
}


// Stack overflow occurs when the call stack pointer exceeds the stack bound. This typically happens in program wth 
// deep recursion.

// Call stack: Each recursive call adds a new frame to the call stack, storing funtion parameters, local variables, and return addresses

// Stack size: The stack has a limited size

// Tail recursion where possible, as some compilers optimize it to prevent stack growth. 

// Tail recursion: A recursive call is tail recursive if it is the last operation in the function.

// Memoization is an optimization technique used ot speed up programs by storing the results of expensive 
// function calls and reusing them when the same inputs occur again. 

// How memoizaion works

// Function caching: Store the results of function calls in a data structure. 
// Call stack: Each recursive call adds a new frame to the call stack, storing function parameters, local variables, and return addresses.
// Stack size: The stack has a limited size, which can be exceeded by deep recursion.


