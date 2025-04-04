class Solution(object):
    def removeElement(self, nums, val):
        k = 0  # Variable to track the new length of the array without the target value
        
        # Loop through each element in the array
        for i in range(len(nums)):
            if nums[i] != val:  # If the current element is not equal to the target value
                nums[k] = nums[i]  # Copy the element to the new position in the array
                k += 1  # Increase the count of valid elements
        
        return k  # Return the new length of the modified array
