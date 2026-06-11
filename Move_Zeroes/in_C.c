// Function moves all zeros to the end of the array
void moveZeroes(int* nums, int numsSize) {

    // Points to the position where the next non-zero element should go
    int nonzero = 0;

    // Traverse the entire array
    for (int i = 0; i < numsSize; i++) {

        // If current element is not zero
        if (nums[i] != 0) {

            // Swap current non-zero element with element at nonzero index
            int temp = nums[i];
            nums[i] = nums[nonzero];
            nums[nonzero] = temp;

            // Move nonzero pointer forward
            nonzero++;
        }
    }
}