#
# @lc app=leetcode id=485 lang=python
#
# [485] Max Consecutive Ones
#

# @lc code=start
class Solution(object):
    def findMaxConsecutiveOnes(self, nums):
        n  = len(nums)
        ans =  0 
        count = 0 
        i =0
        j=0
        while i<n:
           if nums[i] == 1:
               count+
               =1
           else :
               ans = max(ans,count)
               count=0
               j = i
           i+=1
           
        return max(ans,count)
            
               
        
# @lc code=end

