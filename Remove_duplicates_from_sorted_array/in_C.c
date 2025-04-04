int removeDuplicates(int* nums, int numsSize) {
    int k = 1; // Variable to keep track of the number of unique elements
    
    // Loop through the array starting from the second element
    for(int i = 1; i < numsSize; i++) {
        if(nums[i] != nums[i - 1]) { // If the current element is different from the previous one
            nums[k] = nums[i]; // Place the unique element at the correct position
            k++; // Increase the count of unique elements
        }
    }
    return k; // Return the new length of the array with unique elements
}
