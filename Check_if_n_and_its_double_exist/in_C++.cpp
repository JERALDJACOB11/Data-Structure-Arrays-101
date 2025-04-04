class Solution {
    public:
        // Function to check if there exists any pair (i, j) such that one element is double the other
        bool checkIfExist(vector<int>& arr) {
            int s = arr.size();  // Store the size of the array in variable 's'
    
            // Outer loop goes through each element one by one
            for(int i = 0; i < s; i++) {
                // Inner loop compares the current element with every other element
                for(int j = 0; j < s; j++) {
                    // Make sure we are not comparing the same element with itself
                    if(i != j) {
                        // Check if arr[i] is double of arr[j] or arr[j] is double of arr[i]
                        if(arr[i] == 2 * arr[j] || arr[j] == 2 * arr[i]) {
                            return true;  // If found, return true
                        }
                    }
                }
            }
    
            return false;  // If no such pair is found, return false
        }
    };
    