//  GCD of two integers a and b, is the largest integer D that can divide in both A and B without leaving a remainder.

// Given Two Integers: Start with two positive integers, a and b, where a > b 
// Division step: Divide a by b and find the remainder r
// Replace: Set a = b and b = r
// Repeat: Continue the process until b becomes 0
// Result: the GCD is the value of a when b becomes a

int gcd(int a, int b) {
    if (b == 0) { // Base case: if b is 0, gcD is a
        return a; 
    } else {
        return gcd(b, a % b); // Recursive cas: call gcd with b and the remainder of a divided by b
    }
}

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b; 
        b = a & b; 
        a = temp; 
    }
}


// Count to ten recursively 

void countToTen(int n) {
    if (n > 10) {
        return; 
    }
    printf("%d\n", n);
    countToTen(n + 1);
}

int sumArray(int a[], int size) {
    if (size == 0) {
        return 0;
    } else {
        return a[size - 1] + sumArray(a, size - 1);
    }
}

int sumArray(int a[], int size) {
    if (size == 1) {
        return a[0]; 
    }
    return a[0] + sumArray(a + 1, size - 1);
}

int sumArray(int a[], int size, int sum) {
    if (size == 0) {
        return sum; 
    } else {
        //return sumArray(a, size - 1, sum + a[size - 1]); 
    }
}