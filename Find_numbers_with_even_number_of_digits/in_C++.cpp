class Solution {
    public:
        int findNumbers(vector<int>& nums) 
        {
            int count = 0; // This variable keeps track of numbers that have an even number of digits
            
            // Loop through each element in the given vector 'nums'
            for(int i = 0; i < nums.size(); i++) {
                int num = nums[i]; // Get the current number from the array
                int digitnumber = 0; // Variable to count the number of digits in the current number
                
                // Count the number of digits in the current number
                while(num != 0) {
                    num /= 10; // Remove the last digit from the number
                    digitnumber++; // Increase the digit count
                }
                
                // Check if the number of digits is even
                if(digitnumber % 2 == 0) {
                    count++; // Increase the count if the number has an even number of digits
                }
            }
            
            return count; // Return the total count of numbers with an even number of digits
        }
    };
    