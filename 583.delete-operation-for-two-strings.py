#
# @lc app=leetcode id=583 lang=python
#
# [583] Delete Operation for Two Strings
#

# @lc code=start
class Solution(object):
    def f(self,s,t,i,j,dp):
        n = len(s)
        m = len(t)
        if(i>=n or j>=m):
            return 0
        if(dp[i][j]!=-1):
            return dp[i][j]
        if(s[i]==t[j]):
            dp[i][j] = 1+self.f(s,t,i+1,j+1,dp)
            return dp[i][j]
        dp[i][j] = max(self.f(s,t,i+1,j,dp),self.f(s,t,i,j+1,dp))
        return dp[i][j]

    def minDistance(self, s, t):
        n  = len(s)
        m =  len(t)
        dp = [[-1 for _ in range(m+1)]for _ in range(n+1)]
        return (m+n)-2*self.f(s,t,0,0,dp)
        
        
# @lc code=end

