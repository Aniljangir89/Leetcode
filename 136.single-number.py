#
# @lc app=leetcode id=136 lang=python
#
# [136] Single Number
#

# @lc code=start
class Solution(object):
    def singleNumber(self, nums):
        n = len(nums)
        ans = 0
        for i in nums:
            ans^=i
        return ans
            
        4
# @lc code=end

