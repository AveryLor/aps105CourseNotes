#include <stdio.h> 
#include <stdbool.h> 
#include <string.h> 

// bool isPalindrome(char stringInfo[]); 

int main() {
    char raceCar = {'r','a','c','e','c','a','r'}; 
    // printInvertedTriangle(5);
    // printRow(5); 
    // printTriangle(5); 
    if (isPalindrome(raceCar)) { // Prints 1 for true, 0 for false
        printf("True"); 
    } else {
        printf("False"); 
    }

    return 0; 
}

/* ss
Recursion is a method of solving a problem that requires first solving smaller 
instances of the same problem. In programming, recursion is when a function calls itself
,but on smaller problem/input. The functino calls itself repeatedly until a solution is found on the 
smallest problem, which is when the function returns a solution and stops calling itself. 
*/

int gcd(int a, int b) {
    if (a == b) {
        return a; 
    } else if (a > b) {
        return (b, a-b); 
    } else {
        return(b, a); 
    }

}

int factorial(int n) {
    int fact = 1; 

    for (int i = 1; i <= n; i++) {
        fact = fact * i; 
    }
    return fact; 
}

int recursiveFactorial(int n) {
    if (n == 0) {
        return 1; 
    } else {
        return n*recursiveFactorial(n - 1); 
    }
}

/*
All recursive functions must have a base/terminating case, along with a
recursive call as illustrated in the figure below. Case case is when the function returns a value without calling
itself, and it happens when the function calls itself on a smaller problem than the original. Recursive calls should move 
closer to the base case with eevry call. 
*/ 

void printInvertedTriangle(int n) {
    if (n == 0) {
        return; 
    } else {
        for (int i = 0; i < n; i++) {
            printf("*"); 
        }
        printf("\n");
        return printInvertedTriangle(n-1); 
    }

}

/*
In general recursion patterns have the following structure 

Recursive function (problem)
    if terminating condition 
        may do a simple calculatin; 
        return;
    else: 
        break problem into a smaller piece/s
        Recursive function (smaller piece/s)
*/

// Prints a row of n stars
void printRow(int n) {
    if (n == 1) {
        printf("*\n"); 
        return; 
    }
    printf("*"); 
    return printRow(n-1); 
}

void printTriangle(int n) {
    if (n == 0) {
        return; // After a return you continue what you were doing before 
    }
    printRow(n); 
    printTriangle(n-1); // After a return you continue what you were doing here before
    printRow(n); 
}

/*
ROM stands for read-only memory

It is non-volatile, meaning it retains data even when the device is powered off. 

It stores firmware or permanent software, like the BIOS in a computer. 

As the name suggests, it's monly not writable during normal operations

The stack and heap are both located in RAM, which is voltatile memory (data disappears when power is off)

The stack is used for function call frames, local variables etc. 
The heap is used for dynamic memory allocaiton (malloc, new, etc.)

If you try to free() a pointer that points to read-only memory (like a string literal in C), you'll get undefined behaviour

char *str = "hello"; 
free(str); // This leads to undefined behaviour

-> You are creating a string literal, which is stored in a special section of memory, typically read-only memory (often the .rodata segment of your compiled binary)

When you do: 

free(str)

You are telling the runtime to deallocate memory that was not allocated with malloc (or friends)
Is not on the heap 
Might be in a protected read-only segment 

You might also want to add const char*, to ensure that the system knows that you do not intend to edit that string 


char* is null terminated
char[] is null terminated
*/

void printPattern(int n) {
    if (n > 0) {
        printPattern(n - 1);
        printRow(n);
        printPattern(n - 1);
    }
}

bool isRecursive(char stringInfo[], int low, int high) {
    if (low >= high) { // Base case for going all the way with sucess
        return true; 
    }
    if (stringInfo[low] != stringInfo[high]) { // Base case for instant failure
        return false; 
    } else {
        return isRecursive(stringInfo, low + 1, high - 1); // Traversing through the string
    }
}

// bool isPalindrome(char stringInfo[]) {
//     printf("Here"); 
//     int lenStr = strlen(stringInfo); 
//     int mid = lenStr/2; 
//     char end1[mid]; 
//     char end2[mid]; 

//     for (int i = 0; i < mid; i++) {
//         end1[i] = stringInfo[i]; 
//     }

//     for (int j = mid; j > 0; j--) {
//         end2[j] = stringInfo[j]; 
//     }

//     if (strcmp(end1, end2) == 0) {
//         return true; 
//     } else {
//         return false; 
//     }
// }