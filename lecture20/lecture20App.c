#include <stdio.h> 

int main() {
    char str[] = "Hello, World!";
    scanf("%s", &str); 
    str[1] = '\0'; 
    puts(str); 
    printf("%s\n", str); 
}