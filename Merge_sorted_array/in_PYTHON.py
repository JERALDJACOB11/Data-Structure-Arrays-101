class Solution(object):
    def merge(self, nums1, m, nums2, n):
        # Iterate through nums2 and copy its elements into the empty space at the end of nums1
        for i in range(n):
            nums1[m + i] = nums2[i]  # Place nums2[i] into nums1 at position (m + i)
        
        # Sort the merged array to ensure it's in non-decreasing order
        nums1.sort()