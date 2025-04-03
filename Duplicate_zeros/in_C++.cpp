class Solution {
    public:
        void duplicateZeros(vector<int>& arr) {
            int n = arr.size(); // Get the size of the array
            
            // Iterate through the array elements, but stop at the second last element to avoid overflow
            for(int i = 0; i < n - 1; i++) {
                // Check if the current element is zero
                if(arr[i] == 0) {
                    arr.erase(arr.begin() + n - 1); // Remove the last element to maintain array size
                    arr.insert(arr.begin() + i + 1, 0); // Insert a zero at the next position
                    i++; // Skip the next element since it's already set to zero
                }
            }
        }
    };
    