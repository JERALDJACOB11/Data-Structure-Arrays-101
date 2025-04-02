class Solution {
    public:
        vector<int> sortedSquares(vector<int>& nums) {
            // Square each element in the array
            for(int i = 0; i < nums.size(); i++) {
                nums[i] = nums[i] * nums[i]; // Replace each number with its square
            }
            
            // Sort the squared values in ascending order
            sort(nums.begin(), nums.end());
            
            return nums; // Return the sorted squared array
        }
    };
    