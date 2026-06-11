class Solution {
public:

    // Function returns modified vector
    vector<int> replaceElements(vector<int>& arr) {

        // Stores greatest element found so far from right
        int greatest = -1;

        // Start from last element and move left
        for(int i = arr.size() - 1; i >= 0; i--) {

            // Save original value
            int temp = arr[i];

            // Replace current value with greatest element on right
            arr[i] = greatest;

            // Update greatest if original value is larger
            if(temp > greatest)
                greatest = temp;
        }

        // Return modified vector
        return arr;
    }
};