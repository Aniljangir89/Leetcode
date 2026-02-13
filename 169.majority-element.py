#
# @lc app=leetcode id=169 lang=python
#
# [169] Majority Element
#

# @lc code=start
class Solution(object):
    def majorityElement(self, nums):
        n = len(nums)
        ele = nums[0]
        count = 1
        for i in range(1,n):
            if ele == nums[i]:
                count+=1
            elif count ==0 :
                ele = nums[i]
                count = 1
            else : 
                count-=1
        
        count =0 
        for i in range(n):
            if nums[i] == ele:
                count+=1
        
        if count>n/2:
            return ele
        return -1
        
# @lc code=end

