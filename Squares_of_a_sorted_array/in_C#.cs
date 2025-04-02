public class Solution {
    public int[] SortedSquares(int[] nums) {
        // Square each element in the array
        for(int i = 0; i < nums.Length; i++) {
            nums[i] = nums[i] * nums[i]; // Replace each number with its square
        }
        
        // Sort the squared values in ascending order
        Array.Sort(nums);
        
        return nums; // Return the sorted squared array
    }
}