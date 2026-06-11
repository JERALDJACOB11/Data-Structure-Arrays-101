class Solution {

    // Method moves all zeros to end
    public void moveZeroes(int[] nums) {

        // Stores next position for non-zero element
        int count = 0;

        // Traverse array
        for(int i = 0; i < nums.length; i++) {

            // If element is non-zero
            if(nums[i] != 0) {

                // Copy non-zero element to front
                nums[count] = nums[i];

                // Move count ahead
                count++;
            }
        }

        // Fill remaining positions with zeros
        while(count < nums.length) {

            nums[count++] = 0;
        }
    }
}