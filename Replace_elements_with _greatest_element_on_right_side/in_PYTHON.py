class Solution(object):

    # Function receives array and returns modified array
    def replaceElements(self, arr):

        # Stores greatest element found from right side
        greatest = -1

        # Start from last index
        i = len(arr) - 1

        # Continue until beginning of array
        while i >= 0:

            # Save current value before overwriting
            temp = arr[i]

            # Replace current element with greatest value on right
            arr[i] = greatest

            # Update greatest if current value is larger
            if temp > greatest:
                greatest = temp

            # Move to previous index
            i -= 1

        # Return modified array
        return arr