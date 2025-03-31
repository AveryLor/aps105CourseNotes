int binarySearch(int arr[], int left, int right, int target) {
    // Base case: element not found 
    if (left > right) {
        return -1; 
    }

    int mid = left + (right - left) / 2;

    // If element is found at mid 
    if (arr[mid] == target) {
        return mid; 
    }

    // Tail recursion for left half 
    if (arr[mid] > target) {
        return binarySearch(arr, left, mid - 1, target);; 
    }

    // Tail recursino for right half
    return binarySearch(arr, mid + 1, right, target);
}