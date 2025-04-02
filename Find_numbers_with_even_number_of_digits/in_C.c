int findNumbers(int* nums, int numsSize) {
    int count = 0; // This variable keeps track of numbers with an even number of digits
    
    // Loop through each element in the given array 'nums'
    for(int i = 0; i < numsSize; i++) {
        int num = nums[i]; // Get the current number
        int digitcount = 0; // Variable to count the number of digits in the current number
        
        // Count the number of digits in the current number
        while(num != 0) {
            num /= 10; // Remove the last digit from the number
            digitcount++; // Increase the digit count
        }
        
        // Check if the number of digits is even
        if(digitcount % 2 == 0) {
            count++; // Increase the count if the number has an even number of digits
        }
    }
    
    return count; // Return the total count of numbers with an even number of digits
}
