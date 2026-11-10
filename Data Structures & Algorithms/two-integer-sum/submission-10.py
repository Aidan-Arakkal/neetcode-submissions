class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        # we have a hash map that holds all the indicies we have already seen
        # we do target-current and check if that value is in hash map (hashed value holds index)
        # if it is there we append 

        hashmap = {}
        for i in range(len(nums)):
            targ = target-nums[i]
            if hashmap.get(targ) != None:
                return [hashmap[targ],i]
            hashmap[nums[i]] = i
        return []
            
