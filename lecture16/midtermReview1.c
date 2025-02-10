#include <stdio.h> 
#include <stdbool.h>

int main() {
    /*
    bool isValidIndex; 
    int index; 
    if (index >= 0 && index < arrayLength) {
    }
    */
    // int ran dumNum = 
    // rand % 5 + 1 x 5, this gets the five random numbers
    // Make sure that you set up GUI
    int day1, day2, month1, month2; 
    char c; 
    printf("Enter first day (day/month):\n");
    scanf("%d/%d%c", &day1, &month1, &c);

    if (month2 > month1) {
        printf("First date is later"); 
    } else {
        if (day2 > day1) {
            printf("Second date is later"); 
        } else if (day1 > day2) {
            printf("First date is later");
        }
    } 
   

    return 0; 
}