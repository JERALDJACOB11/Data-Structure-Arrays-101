public class Solution {
    public bool CheckIfExist(int[] arr) {
        int l = arr.Length; // Store the length of the array in variable 'l'

        // Outer loop to go through each element in the array
        for(int i = 0; i < l; i++) {
            
            // Inner loop to compare the current element with every other element
            for(int j = 0; j < l; j++) {
                
                // Ensure that we are not comparing the same element with itself
                if(i != j) { 
                    
                    // Check if one number is double the other
                    if(arr[i] == 2 * arr[j] || arr[j] == 2 * arr[i]) {
                        return true; // If such a pair is found, return true
                    }
                }
            }
        }

        return false; // If no such pair exists, return false
    }
}
