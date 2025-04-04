class Solution(object):
    def checkIfExist(self, arr):
        # First, check how many zeros are in the array.
        # If there are more than one zero, then one zero can be double of the other (0 * 2 = 0),
        # so return True.
        if arr.count(0) > 1: 
            return True

        # Create a set of all elements in the array except zero.
        # Using a set allows faster lookup (like checking if a number exists).
        j = set(arr) - {0}

        # Go through each number in the array
        for i in arr:
            # Check if double of the number exists in the set (excluding zeros)
            if 2 * i in j:
                return True  # Found a number and its double

        # If no such pair is found after checking all elements, return False
        return False
