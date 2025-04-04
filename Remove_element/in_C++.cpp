class Solution {
    public:
        int removeElement(vector<int>& nums, int val) {
            int k = 0; // Variable to track the new length of the array without the target value
            
            // Loop through each element in the array
            for (int i = 0; i < nums.size(); i++) {
                if (nums[i] != val) { // If the current element is not equal to the target value
                    nums[k] = nums[i]; // Copy the element to the new position in the array
                    k++; // Increase the count of valid elements
                }
            }
            return k; // Return the new length of the modified array
        }
    };
    