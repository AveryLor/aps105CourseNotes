#include <stdio.h> 

int sumDivisors(int num) {
    int sum = 0; 
    for (int i = 1; i<num; i++) {
        if (num % i == 0) {
            sum+= i; 
        }
    }
    return sum;
}

int main() {
    int num; 
    printf("Enter a number: ");
    scanf("Enter the number: %d", &num);
    printf("Sum of divisors of %d is %d", num, sumDivisors(num));  
    return 0; 
}