class Solution {
public:

    // Function moves all zeros to end
    void moveZeroes(vector<int>& nums) {

        // Stores next position for non-zero element
        int count = 0;

        // Traverse vector
        for(int i = 0; i < nums.size(); i++) {

            // If current element is non-zero
            if(nums[i] != 0) {

                // Place it at count position
                nums[count] = nums[i];

                // Move count ahead
                count++;
            }
        }

        // Fill remaining positions with zero
        while(count < nums.size()) {

            nums[count++] = 0;
        }
    }
};