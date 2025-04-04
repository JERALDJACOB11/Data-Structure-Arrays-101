bool checkIfExist(int* arr, int arrSize) {
    int s = arrSize; // Store the size of the array

    // Loop through each element in the array
    for(int i = 0; i < s; i++){
        // Loop through each element again to compare with arr[i]
        for(int j = 0; j < s; j++){
            if(i != j) { // Make sure we are not comparing the same element
                // Check if arr[i] is double of arr[j] or vice versa
                if(arr[i] == 2 * arr[j] || arr[j] == 2 * arr[i])
                    return true; // If condition is met, return true
            }
        }
    }

    return false; // If no such pair is found, return false
}
