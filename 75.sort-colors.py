#
# @lc app=leetcode id=75 lang=python
#
# [75] Sort Colors
#

# @lc code=start
class Solution(object):
    def sortColors(self, nums):
        n = len(nums)
        lo  =0 
        mid = 0
        hi = n -1
        while(mid<=hi):
            if nums[mid]==0:
                nums[mid],nums[lo] = nums[lo],nums[mid]
                lo+=1
                mid+=1
            elif nums[mid] ==2:
                nums[mid],nums[hi] = nums[hi],nums[mid]
                hi-=1
            else:
                mid+=1

        
        
# @lc code=end

