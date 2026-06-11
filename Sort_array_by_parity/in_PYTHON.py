class Solution(object):

    def sortArrayByParity(self, nums):

        # Stores odd numbers
        odd = []

        # Stores even numbers
        even = []

        # Traverse array
        for i in nums:

            # If number is even
            if i % 2 == 0:

                # Add to even list
                even.append(i)

            else:

                # Add to odd list
                odd.append(i)

        # Return evens followed by odds
        return even + odd