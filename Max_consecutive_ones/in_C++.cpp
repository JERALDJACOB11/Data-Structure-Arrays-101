class Solution {
public:
int findMaxConsecutiveOnes(vector<int>& nums) {
    int Max = 0; // This variable keeps track of the current count of consecutive 1s
    int maxco = 0; // This variable keeps track of the maximum count of consecutive 1s found so far
    
    //Loop through each element in the given vector (array) 'nums'
    for(int i = 0; i < nums.size(); i++){
        if(nums[i] == 1){ // If the current element is 1
            Max += 1; // Increase the current consecutive count
            maxco = max(Max, maxco); // Update the maximum count if the current count is greater
        }else{
            Max = 0; // If the current element is not 1, reset the current consecutive count to 0
        }
    }
    
    return maxco; // Return the maximum count of consecutive 1s found
}
};

