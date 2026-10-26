class Solution:
    def rob(self, nums: List[int]) -> int:
        length = len(nums)
        if(length == 0):
            return 0
        elif (length == 1):
            return nums[0]
        elif (length ==2):
            return max(nums)

        dp = [0]*(length+1)
        dp[0] = nums[0]
        dp[1]=nums[1]
        dp[2]=dp[0]+nums[2]
        for i in range(3,length+1):
            if i !=length:
                dp[i] = nums[i] + max(dp[i-2],dp[i-3])
            else:
                dp[i] = max(dp[i-1],dp[i-2],dp[i-3])
            
        return max(dp[length-1],dp[length-2])

        