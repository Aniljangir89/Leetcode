#
# @lc app=leetcode id=34 lang=python
#
# [34] Find First and Last Position of Element in Sorted Array
#

# @lc code=start
class Solution(object):
    def searchRange(self, nums, target):
        n = len(nums)
        first = -1
        lo = 0
        hi =n -1
        while(lo<=hi):
            mid = (lo+hi)//2
            if(nums[mid]==target):
                first = mid
                hi = mid-1
            elif(nums[mid] > target):
                hi = mid -1
            else :
                lo = mid +1
        lo = 0
        hi = n -1 
        second  = -1
        while(lo<=hi):
            mid = (lo+hi)//2
            if nums[mid] == target:
                second = mid
                lo = mid + 1
            elif(nums[mid]>target):
                hi  = mid -1 
            else:
                lo = mid + 1
        l = list((first,second))
        return l




        
# @lc code=end

