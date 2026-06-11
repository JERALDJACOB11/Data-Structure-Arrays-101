class Solution {

    // Returns new array with even numbers first
    public int[] sortArrayByParity(int[] nums) {

        // Tracks insertion position
        int count = 0;

        // Create result array
        int[] new_arr = new int[nums.length];

        // Copy all even numbers first
        for(int i = 0; i < nums.length; i++) {

            if(nums[i] % 2 == 0) {

                new_arr[count] = nums[i];

                count++;
            }
        }

        // Copy all odd numbers next
        for(int i = 0; i < nums.length; i++) {

            if(nums[i] % 2 == 1) {

                new_arr[count] = nums[i];

                count++;
            }
        }

        // Return result array
        return new_arr;
    }
}