class Solution {
    public boolean checkIfExist(int[] arr) {
        int l = arr.length; // Store the length of the array in variable 'l'

        // Outer loop: Go through each element in the array
        for (int i = 0; i < l; i++) {

            // Inner loop: Compare the current element with all other elements
            for (int j = 0; j < l; j++) {

                // Make sure we don't compare the same element with itself
                if (i != j) {

                    // Check if one number is double the other
                    if (arr[i] == 2 * arr[j] || arr[j] == 2 * arr[i]) {
                        return true; // If such a pair is found, return true
                    }
                }
            }
        }

        // If we go through all pairs and don't find a match, return false
        return false;
    }
}
