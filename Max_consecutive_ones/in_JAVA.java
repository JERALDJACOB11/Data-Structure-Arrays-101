class Solution{
    public int findMaxConsecutiveOnes(int[] nums) {
        int max = 0; // This variable keeps track of the current count of consecutive 1s
        int maxco = 0; // This variable keeps track of the maximum count of consecutive 1s found so far
        
        // Loop through each element in the given array 'nums'
        for(int i = 0; i < nums.length; i++){
            if(nums[i] == 1){ // If the current element is 1
                max += 1; // Increase the current consecutive count
                maxco = Math.max(max, maxco); // Update the maximum count if the current count is greater
            } else {
                max = 0; // If the current element is not 1, reset the current consecutive count to 0
            }
        }
        
        return maxco; // Return the maximum count of consecutive 1s found

    }
}