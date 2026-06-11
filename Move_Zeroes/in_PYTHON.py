class Solution(object):

    # Function moves all zeros to end
    def moveZeroes(self, nums):

        # Points to next position for non-zero element
        count = 0

        # Traverse list
        for i in range(len(nums)):

            # If current element is non-zero
            if nums[i] != 0:

                # Swap current element with count position
                nums[i], nums[count] = nums[count], nums[i]

                # Move count forward
                count += 1