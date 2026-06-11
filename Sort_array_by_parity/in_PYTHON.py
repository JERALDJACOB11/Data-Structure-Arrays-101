class Solution(object):
    def sortArrayByParity(self, nums):
        odd , even = [] , []
        for i in nums:
            if i % 2 ==0:
                even.append(i)
            else:
                odd.append(i)
        return  even + odd      