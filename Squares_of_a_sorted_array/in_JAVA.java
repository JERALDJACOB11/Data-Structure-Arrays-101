class Solution {
    public int[] sortedSquares(int[] nums) {
        // Square each element in the array
        for(int i = 0; i < nums.length; i++) {
            nums[i] = nums[i] * nums[i]; // Replace each number with its square
        }
        
        // Sort the squared values in ascending order
        Arrays.sort(nums);
        
        return nums; // Return the sorted squared array
    }
}
