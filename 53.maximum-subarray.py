#
# @lc app=leetcode id=53 lang=python
#
# [53] Maximum Subarray
#

# @lc code=start
class Solution(object):
    def maxSubArray(self, nums):
        n = len(nums)
        curr_max = nums[0]
        curr_ans = nums[0]
        for i in range(1,n):
            curr_max = max(nums[i],curr_max+nums[i])
            curr_ans = max(curr_ans,curr_max)

        return curr_ans
        
# @lc code=end

