class Solution:
    def hasDuplicate(self, nums: List[int]) -> bool:
        i = {}
        for j in nums:
            if j in i:
                return True
            else:
                i[j] = 2
        return False
            
        