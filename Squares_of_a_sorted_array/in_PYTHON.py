class Solution(object):
    def sortedSquares(self, nums):
        # Square each element in the list
        nums = [num * num for num in nums]  # Replace each number with its square
        
        # Sort the squared values in ascending order
        nums.sort()
        
        return nums  # Return the sorted squared list
