// Function returns a new array with even numbers first and odd numbers later
int* sortArrayByParity(int* nums, int numsSize, int* returnSize) {

    // Allocate memory for new array
    int* new_arr = (int*)malloc(numsSize * sizeof(int));

    // Points to next position for even number
    int even = 0;

    // Points to next position for odd number
    int odd = numsSize - 1;

    // Traverse original array
    for (int i = 0; i < numsSize; i++) {

        // Check if number is even
        if (nums[i] % 2 == 0) {

            // Place even number at front
            new_arr[even] = nums[i];

            // Move even pointer forward
            even++;
        }
        else {

            // Place odd number at back
            new_arr[odd] = nums[i];

            // Move odd pointer backward
            odd--;
        }
    }

    // Set return size
    *returnSize = numsSize;

    // Return newly created array
    return new_arr;
}