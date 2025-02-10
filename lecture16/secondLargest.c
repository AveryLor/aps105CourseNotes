// A program that finds the largest element in the array

int secondLargest(int arr[], int size) {
    int largest = arr[0]; 
    int secondLargest = arr[1]; 
    if (arr[0] < arr[1]) {
        largest = arr[1]; 
        secondLargest = arr[0];
    }
    for (int i = 2; i < size; i++) {
        if (arr[i] > largest) {
            largest = arr[i]; 
            secondLargest = largest;
        } else if (arr[i] > secondLargest) {
            secondLargest = arr[i]; 
        }
    }
    return secondLargest;
}

int main() {
    
    return 0; 
}