#
# @lc app=leetcode id=213 lang=python
#
# [213] House Robber II
#

# @lc code=start
class Solution(object):
    def f(self,nums,l,r,dp):
        if(l>=r):
            return 0
        if dp[l]!=-1:
            return dp[l]
        dp[l] =  max(self.f(nums,l+1,r,dp), self.f(nums,l+2,r,dp)+nums[l])
        return dp[l]
    def rob(self, nums):
        n = len(nums)
        dp = [-1]*(n+1)
        dp2 = [-1]*(n+1)
        if(n ==1):
            return nums[0]
        return max(self.f(nums,0,n-1,dp2),self.f(nums,1,n,dp))
        
# @lc code=end

