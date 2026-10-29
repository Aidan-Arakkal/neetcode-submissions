class Solution:
    def lengthOfLIS(self, nums: List[int]) -> int:
        

        #sub-problem = longest substring from index 0 to i 
        #i keeps iterating forwards
        #two instances we either take the beginning or the end
        # 5 1 4 6 2 4 6 7
        # [1 1 2 0 0 0 0]
        length = len(nums)
        dp = [1]*length
        for i in range(len(nums)):
            maxy=1
            for j in range(i):
                if(nums[j]<nums[i]) and (1+dp[j]>maxy):
                    maxy = 1+dp[j]
            dp[i]=maxy
        return max(dp)
                    


            