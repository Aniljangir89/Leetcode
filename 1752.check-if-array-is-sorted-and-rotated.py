#
# @lc app=leetcode id=1752 lang=python
#
# [1752] Check if Array Is Sorted and Rotated
#

# @lc code=start
class Solution(object):
    def check(self, nums):
        n = len(nums)
        count = 0
        for i in range(n):
            if nums[i] > nums[(i+1)%n]:
                count+=1
        return count<=1
        
# @lc code=end

