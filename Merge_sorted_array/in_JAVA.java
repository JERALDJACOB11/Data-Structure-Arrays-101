class Solution {
    public void merge(int[] nums1, int m, int[] nums2, int n) {
        int p1 = m - 1; // Pointer for the last valid element in nums1
        int p2 = n - 1; // Pointer for the last element in nums2
        int i = m + n - 1; // Pointer for the last position in nums1
        
        // Iterate while there are elements left in nums2
        while (p2 >= 0) {
            // If nums1 has elements left and the current element in nums1 is greater than nums2
            if (p1 >= 0 && nums1[p1] > nums2[p2]) {
                nums1[i--] = nums1[p1--]; // Move the larger element to the correct position in nums1
            } else {
                nums1[i--] = nums2[p2--]; // Otherwise, take the element from nums2
            }
        }
    }
}
