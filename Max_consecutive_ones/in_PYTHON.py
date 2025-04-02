class Solution(object):
    def findMaxConsecutiveOnes(self, nums):
    Max = 0  # This variable keeps track of the current count of consecutive 1s
    maxco = 0  # This variable keeps track of the maximum count of consecutive 1s found so far
    
    # Loop through each element in the given list 'nums'
    for i in range(len(nums)):
        if nums[i] == 1: # If the current element is 1
            Max += 1  # Increase the current consecutive count
            maxco = max(Max, maxco)  # Update the maximum count if the current count is greater
        else:
            Max = 0  # If the current element is not 1, reset the current consecutive count to 0
    
    return maxco  # Return the maximum count of consecutive 1s found