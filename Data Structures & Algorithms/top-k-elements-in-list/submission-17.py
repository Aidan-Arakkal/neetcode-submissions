class Solution:
    def topKFrequent(self, nums: List[int], k: int) -> List[int]:
        # make a hash map
        # convert hash map to items and sort by the number of outputs
        hashmap = {}
        for i in nums:
            hashmap[i]=hashmap.get(i,0)+1
        kmost = sorted(hashmap.items(), key = lambda x:x[1],reverse = True)
        return [kmost[x][0] for x in range(0,k)]
            

