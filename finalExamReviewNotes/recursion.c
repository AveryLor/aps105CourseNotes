#include <stdio.h> 

int main() {
    // printInvertedTriangle(5);
    // printRow(5); 
    printTriangle(5); 

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
    if (n == 1) {
        printf("*\n"); 
        return; 
    }
    printRow(n); 
    return printTriangle(n-1); 
}