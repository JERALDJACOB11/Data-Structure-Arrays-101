public class Solution {

    // Returns new array with evens first
    public int[] SortArrayByParity(int[] nums) {

        // Stores next insertion position
        int count = 0;

        // Create result array
        int[] new_arr = new int[nums.Length];

        // First pass: copy all even numbers
        for(int i = 0; i < nums.Length; i++) {

            if(nums[i] % 2 == 0) {

                new_arr[count] = nums[i];

                count++;
            }
        }

        // Second pass: copy all odd numbers
        for(int i = 0; i < nums.Length; i++) {

            if(nums[i] % 2 == 1) {

                new_arr[count] = nums[i];

                count++;
            }
        }

        // Return result array
        return new_arr;
    }
}