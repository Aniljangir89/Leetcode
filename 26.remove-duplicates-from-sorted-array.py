#
# @lc app=leetcode id=26 lang=python
#
# [26] Remove Duplicates from Sorted Array
#

# @lc code=start
class Solution(object):
    def removeDuplicates(self, nums):
        n = len(nums)
        i=0
        j=1
        while j<n:
            if nums[i]!=nums[j]:
                i+=1
                nums[i]=nums[j]
            j+=1

        return i+1

        
# @lc code=end
