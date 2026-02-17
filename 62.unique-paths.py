#
# @lc app=leetcode id=62 lang=python
#
# [62] Unique Paths
#

# @lc code=start
class Solution(object):
    def f(self,n,m,i,j):
        if i>=n or j>=m:
            return 0
        if i==n-1 and j==m-1:
            return 1
        return  self.f(m,n,i+1,j)+self(m,n,i,j+1)
    def uniquePaths(self, m, n):
       return self.f(n,m,0,0)
        
# @lc code=end

