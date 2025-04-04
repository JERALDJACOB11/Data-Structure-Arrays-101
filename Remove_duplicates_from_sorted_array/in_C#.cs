public class Solution {
    public int RemoveDuplicates(int[] nums) {
        int k = 1; // Variable to keep track of the count of unique elements
        
        // Loop through the array starting from the second element
        for(int i = 1; i < nums.Length; i++) {
            if(nums[i] != nums[i - 1]) { // If the current element is different from the previous one
                nums[k] = nums[i]; // Store the unique element at the correct position
                k++; // Increase the count of unique elements
            }
        }
        return k; // Return the new length of the array with unique elements
    }
}

