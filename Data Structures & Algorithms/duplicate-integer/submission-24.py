class Solution:
    def hasDuplicate(self, nums: List[int]) -> bool:
        hashmap = {}
        for i in range(len(nums)):
            if (hashmap.get(nums[i]) != None):
                return True
            hashmap[nums[i]] = 0
        return False
