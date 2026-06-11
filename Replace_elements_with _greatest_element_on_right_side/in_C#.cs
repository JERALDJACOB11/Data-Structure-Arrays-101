public class Solution {

    // Method returns modified array
    public int[] ReplaceElements(int[] arr) {

        // Stores greatest element seen from right side
        int greatest = -1;

        // Traverse array from last index to first index
        for(int i = arr.Length - 1; i >= 0; i--) {

            // Save current value before replacing it
            int temp = arr[i];

            // Replace current element with greatest element on its right
            arr[i] = greatest;

            // If current element is larger than greatest
            // update greatest
            if(temp > greatest) {
                greatest = temp;
            }
        }

        // Return modified array
        return arr;
    }
}