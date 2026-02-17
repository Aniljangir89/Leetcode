#
# @lc app=leetcode id=63 lang=python
#
# [63] Unique Paths II
#

# @lc code=start
class Solution(object):
    def f(self,dp,nums,i,j):
        n = len(nums)
        m = len(nums[0])
        if i>= n or j>=m or nums[i][j]==1:
            return 0
        if i==n-1 and j==m-1:
            return 1
        if dp[i][j]!=-1:
            return dp[i][j]
        dp[i][j] = self.f(dp,nums,i+1,j)+self.f(dp,nums,i,j+1)
        return dp[i][j]
    def uniquePathsWithObstacles(self, nums):
       n = len(nums)
       m = len(nums[0])
       dp = [[-1 for _ in  range(m+1)]for _ in range(n+1) ]
       return self.f(dp,nums,0,0)
        
# @lc code=end

