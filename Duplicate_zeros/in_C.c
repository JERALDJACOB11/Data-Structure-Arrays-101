void duplicateZeros(int* arr, int arrSize) {
    int n = arrSize; // Get the size of the array
    
    // Iterate through the array elements, but stop at the second last element to avoid overflow
    for(int i = 0; i < n - 1; i++) {
        // Check if the current element is zero
        if(arr[i] == 0) {
            // Shift elements to the right to make space for the duplicated zero
            for(int j = n - 1; j > i; j--) {
                arr[j] = arr[j - 1]; // Move each element one step forward
            }
            
            // Ensure we do not go out of bounds and place a zero in the next position
            if(i + 1 < n) {
                arr[i + 1] = 0; // Insert the duplicated zero
                i++; // Skip the next element since it's already set to zero
            }
        }
    }
}
