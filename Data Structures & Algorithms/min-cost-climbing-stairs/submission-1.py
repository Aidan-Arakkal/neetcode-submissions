class Solution:
    def minCostClimbingStairs(self, cost: List[int]) -> int:
        #cost[i] = cost of leaving a stair
        #we can either step+1 or step+2
        #find the minimum step cost to get to the top step
        #[1,2,3] output =2 either get to 3 from

        length = len(cost)
        if(length == 0):
            return 0
        if(length ==1):
            return cost[0]
        if(length ==2):
            return min(cost[0], cost[1])
        dp = [0]*length
        dp[0] = cost[0]
        dp[1] = cost[1]
        for i in range(2,length):
            dp[i]= cost[i]+min(dp[i-1],dp[i-2])
        return min(dp[i],dp[i-1])