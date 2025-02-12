#include <stdio.h> 

int main() {

    return 0; 
}

void orderArrayByDigit2(int array[]) {
    int sortedArray [6] = {}; 
    int n = 0; 
    for (int i = 0; i <= 9; i++) { // Setting 0 and 9 places
        for (int j = 0; j < 6; j++) {
            int seconddigit = (array[j]/10) % 10; 
            if (seconddigit == i) {
                sortedArray[n] = array[j]; 
                n++; 
            }
        }
    }
    printf("%d,", sortedArray[0]);
    for (int i = 1; i < 6; i++) {
        printf(" %d,", sortedArray[i]);
    }
}


/*
void createArray(int array[], int newArray[]) {
    int n = sizeof(array) / sizeof(array[0]);
    int i;
    for (i = 0; i < n; i++) {
        array[i] = i;
    }
}

void orderArrayBDigit2(int array[]) {
    int n = sizeof(array) / sizeof(array[0]);
    int i, j, temp;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (array[j] > array[j + 1]) {
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }

}
*/