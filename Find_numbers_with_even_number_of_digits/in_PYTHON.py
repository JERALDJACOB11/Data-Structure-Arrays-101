import math

class Solution(object):
    def findNumbers(self, nums):
        count = 0  # This variable keeps track of numbers with an even number of digits
        
        # Loop through each number in the given list 'nums'
        for num in nums:
            digitcount = math.floor(math.log10(num) + 1)  # Calculate the number of digits in 'num'
            
            # Check if the number of digits is even
            if digitcount % 2 == 0:
                count += 1  # Increase the count if the number has an even number of digits
        
        return count  # Return the total count of numbers with an even number of digits
