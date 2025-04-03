class Solution(object):
    def duplicateZeros(self, arr):
        i = 0  # Initialize index variable
        
        # Loop through the array while 'i' is within the array length
        while i < len(arr):
            # Check if the current element is zero
            if arr[i] == 0:
                arr.insert(i + 1, 0)  # Insert a zero at the next position
                arr.pop()  # Remove the last element to maintain the array size
                i += 1  # Skip the next element since it's already set to zero
            
            i += 1  # Move to the next element
