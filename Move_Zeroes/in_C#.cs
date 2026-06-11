public class Solution {

    // Method moves all zeros to end
    public void MoveZeroes(int[] nums) {

        // Position where next non-zero element should be placed
        int count = 0;

        // Traverse array
        for(int i = 0; i < nums.Length; i++) {

            // If current element is non-zero
            if(nums[i] != 0) {

                // Copy it to the front
                nums[count] = nums[i];

                // Move count forward
                count++;
            }
        }

        // Fill remaining positions with zeros
        while(count < nums.Length) {

            nums[count++] = 0;
        }
    }
}