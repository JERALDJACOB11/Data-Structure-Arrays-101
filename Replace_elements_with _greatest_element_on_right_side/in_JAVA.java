class Solution {

    // Method returns modified array
    public int[] replaceElements(int[] arr) {

        // Stores greatest element encountered from right side
        int greatest = -1;

        // Traverse from last index to first index
        for(int i = arr.length - 1; i >= 0; i--) {

            // Save current value before replacement
            int temp = arr[i];

            // Replace current element with greatest value found so far
            arr[i] = greatest;

            // If current value is larger than greatest
            // update greatest
            if(temp > greatest) {
                greatest = temp;
            }
        }

        // Return modified array
        return arr;
    }
}