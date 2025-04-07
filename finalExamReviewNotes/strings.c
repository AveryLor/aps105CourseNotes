#include <stdio.h> 
#include <string.h> 

int main() {
    char myString[] = "Hello"; // 6 characters due to the null termination
    char* pStr = "wow"; // 4 characters due to the null termination
    printf("%s\n", myString); // Prints "Hello"
    printf("%s\n", pStr); // Prints "wow"   
    printf("%c\n", myString); // Prints "H"
    printf("%p\n", *pStr); // Prints "w"
    //char months[][10] = {"January",   "February", "March",    "April", "May",       "June",     "July",     "August", "September", "October",  "November", "December"};
    char* months[12];
    
    months[0] = "January";
    months[1] = "February";
    months[2] = "March";
    months[3] = "April";
    months[4] = "May";
    months[5] = "June";
    months[6] = "July";
    months[7] = "August";
    months[8] = "September";
    months[9] = "October";
    months[10] = "November";
    months[11] = "December";
    
    return 0; 
}

/*
char* pStr = "Hello";
pStr[0] = 'h';

In C, string literals are stored in read-only memory, and modifying them results in undefined behavior. 
That means your program might crash, might do nothing, or might corrupt memory — there's no guarantee.
puts(); -> Prints a string to stdout, followed by a newline.

fgets(st, 3, stdin); -> Puts an additional \0
strlen(st); -> Returns the length of the string excluding the null terminator.
strcpy(st, "Hello"); -> Copies the string "Hello" into st. The destination must be large enough to hold the source string and the null terminator.
strcat(st, "World"); -> Concatenates the string "World" to st. The destination must be large enough to hold the concatenated result. Concatenates to the end of the string
strcmp(st, "Hello"); -> Compares st with "Hello". Returns 0 if they are equal, a negative value if st is less than "Hello", and a positive value if st is greater than "Hello".
strchr searches for a character in a string. It returns a pointer to the first occurrence of the character in the string, or NULL if the character is not found.
strstr(s1, s2) searches for a substring in a string. The function returns a pointer ot the first occurence of s2 in s1. If s2 is not found in s1, the function returns NULL. 
*/