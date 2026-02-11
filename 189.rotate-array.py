#
# @lc app=leetcode id=189 lang=python
#
# [189] Rotate Array
#

# @lc code=start
class Solution(object):
    def rotate(self, nums, k):
       n = len(nums)
       k = k%n 
       nums[:]=nums[:: -1]
       nums[0:k] = nums[0:k][::-1]
       nums[k:] = nums[k:][::-1]

       
        
# @lc code=end



