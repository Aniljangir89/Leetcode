#
# @lc app=leetcode id=33 lang=python
#
# [33] Search in Rotated Sorted Array
#

# @lc code=start
class Solution(object):
    def search(self, nums, target):
        n = len(nums)
        lo = 0
        hi = n-1
        while(lo<=hi):
            mid = (lo+hi)//2
            if(nums[mid]==target):return mid
            if(nums[lo]<=nums[mid]):
                if(nums[lo]<=target and nums[mid]>=target):
                    hi = mid-1
                else :
                    lo = mid+1
            else:
                if(nums[mid]<=target and nums[hi]>=target):
                    lo = mid +1
                else :
                    hi = mid -1
        return -1
        
# @lc code=end

