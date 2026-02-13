#
# @lc app=leetcode id=560 lang=python
#
# [560] Subarray Sum Equals K
#

# @lc code=start
class Solution(object):
    def subarraySum(self, nums, k):
       n = len(nums)
       mp = {}
       i = 0
       count=0
       ans=0
       mp[0]=1
       while i<n:
           count+=nums[i]
           if( count-k in mp):
               ans+=mp[count-k]

           mp[count]= mp.get(count,0)+1
           i+=1
       return ans
           
           
        
# @lc code=end

