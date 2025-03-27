
int binarySearch(int arr[], int left, int right, int target) {
    if (left <= right) {
        int mid = left + (right - left) / 2; 
        // Check if target is at mid 
        if (arr[mid] == target) {
            return mid; 
        }

        // Search the left half if target is smaller than mid 
        if (arr[mid] < target) {
            return binarySearch(arr, left, mid - 1, target); 
        }

        // Search the right half if target is greater than mid
        return binarySearch(arr, mid + 1, right, target);
    }
    return -1; 
}