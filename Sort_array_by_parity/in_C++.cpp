class Solution {
public:

    // Rearranges array so evens come first
    vector<int> sortArrayByParity(vector<int>& nums) {

        // Position for next even number
        int count = 0;

        // Traverse array
        for(int i = 0; i < nums.size(); i++) {

            // If current element is even
            if(nums[i] % 2 == 0) {

                // Move even number to front
                swap(nums[i], nums[count]);

                // Advance count
                count++;
            }
        }

        // Return modified vector
        return nums;
    }
};