#
# @lc app=leetcode id=268 lang=python
#
# [268] Missing Number
#

# @lc code=start
class Solution(object):
    def missingNumber(self, nums):
        n = len(nums)
        s = sum(nums)
        s1 = (n*(n+1))/2
        return s1 - s
        
# @lc code=end

