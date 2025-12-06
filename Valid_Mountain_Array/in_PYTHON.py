class Solution(object):
    def validMountainArray(self, arr):
        if len(arr) < 3:
            return False
        s = 0
        e = len(arr)-1
        while s + 1 < e and arr[s] < arr[s+1]:
            s += 1
        while e - 1 > 0 and arr[e] < arr[e-1]:
            e -= 1
        return s == e