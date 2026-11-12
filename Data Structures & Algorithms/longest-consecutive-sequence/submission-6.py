class Solution:
    def longestConsecutive(self, nums: List[int]) -> int:
        # needs dp programming
        # LCS(i,j) i = current index j = prev number index
        # dp[i] represents the highest so far at that point
        maxval = 0
        allnums = set(nums)
        for i in allnums:
            length = 0
            if i-1 not in allnums:
                length = 1
                j=i
                while j+1 in allnums:
                    j+=1
                    length +=1
                maxval = max(length,maxval)
        return maxval
