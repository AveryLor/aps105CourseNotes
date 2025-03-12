// Additional things in C that you should know about

// Know switch statements

// Recursively checking if a string is a palindrome

#include <stdbool.h> 
#include <string.h> 

bool isPalindrome(char* str, int size) {
    if (size < 2) { // Base case: if the size is less than 2, the string is a palindrome
        return true;
    } 
    if (*str != (str + size - 1)) { // Base case, first and last character must be true
        return false; // Return false if the first and last character are not true
    }
    return isPalindrome(str + 1, size - 2); // Recursive call, moving up one character, and going down one character 
} // Size -2 because we are skipping the first and last character, not affected by str

void swap(char* a, char* b) {
    char temp = *a;
    *a = *b; 
    *b = temp;

}

void reversec(char* str, int size) {
    if (size < 2) {
        return; 
    }
    swap(str, str + size - 1); // Swap the first and last character
    reversec(str + 1, size - 2); // Continue ot reverse throughout the rest of the string
    
}

void reverse(char* str)  {
    reversec(str, strlen(str));
}

int countoc(char* haystack, char* needle) {
    char* start = strstr(haystack, needle); // Find the first occurence of the needle in the haystack
    if (start == NULL) {
        return 0; // If the needle is not found, return 0
    }
    // Start at the first occurence of the needle found in the haystack and go from there
    return 1 + countoc(start + 1, needle); // Recursive call, move the start pointer up one character and continue to search for the needle
} // We add 1 because we found a needle in the haystack initially