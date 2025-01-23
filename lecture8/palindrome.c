#include <stdio.h> 


int main() {
    int num, reverse = 0, original; 
    scanf("%d", &num); 
    original=num; 

    while (num) {
        reverse = reverse * 10 + (num % 10); 
        num /= 10; 
    }
    if (reverse == original) {
        printf("It is a palindrome\n");
    } else {
        printf("It is not a palindrome\n");
    }
}