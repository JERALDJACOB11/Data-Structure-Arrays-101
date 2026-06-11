// Function returns a pointer to the modified array
int* replaceElements(int* arr, int arrSize, int* returnSize) {

    // Set the size of the returned array
    *returnSize = arrSize;

    // Stores the greatest element found so far from the right side
    // Last element should become -1, so initialize greatest as -1
    int greatest = -1;

    // Traverse the array from right to left
    for(int i = arrSize - 1; i >= 0; i--) {

        // Save current element before overwriting it
        int temp = arr[i];

        // Replace current element with greatest element seen so far
        arr[i] = greatest;

        // Update greatest if current element is larger
        if(temp > greatest)
            greatest = temp;
    }

    // Return modified array
    return arr;
}