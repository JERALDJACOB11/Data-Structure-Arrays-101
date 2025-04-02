int* sortedSquares(int* nums, int numsSize, int* returnSize) {
    // Custom comparison function for sorting integers in ascending order
    int compare(const void* a, const void* b){
        return (*(int*)a - *(int*)b); // Subtracts two integers to determine order
    }
    
    // Square each element in the array
    for(int i = 0; i < numsSize; i++) {
        nums[i] = nums[i] * nums[i]; // Replace each number with its square
    }
    
    // Sort the squared values in ascending order
    qsort(nums, numsSize, sizeof(int), compare);
    
    *returnSize = numsSize; // Set the return size to match the input array size
    return nums; // Return the sorted squared array
}
