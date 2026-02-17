#
# @lc app=leetcode id=62 lang=python
#
# [62] Unique Paths
#

# @lc code=start
class Solution(object):
    def f(self,n,m,i,j,dp):
        if i>=n or j>=m:
            return 0
        if i==n-1 and j==m-1:
            return 1
        if(dp[i][j]!=-1):
            return dp[i][j]
         
        dp[i][j]= self.f(n,m,i+1,j,dp)+self.f(n,m,i,j+1,dp)
        return dp[i][j]
    def uniquePaths(self, m, n):
       dp = [[-1 for _ in range(m+1)]for _ in range(n+1)]
       return self.f(n,m,0,0,dp)
        
        
# @lc code=end

