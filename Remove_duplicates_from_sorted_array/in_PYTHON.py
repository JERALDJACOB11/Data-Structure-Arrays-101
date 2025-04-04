class Solution(object):
    def removeDuplicates(self, nums):
        k = 1  # Variable to keep track of the count of unique elements
        
        # Loop through the array starting from the second element
        for i in range(1, len(nums)):
            if nums[i] != nums[i - 1]:  # If the current element is different from the previous one
                nums[k] = nums[i]  # Store the unique element at the correct position
                k += 1  # Increase the count of unique elements
        
        return k  # Return the new length of the array with unique elements
