#
# @lc app=leetcode id=2149 lang=python
#
# [2149] Rearrange Array Elements by Sign
#

# @lc code=start
class Solution(object):
    def rearrangeArray(self, nums):
        n = len(nums)
        pos = []
        neg = []
        for i in range(n):
            if nums[i] > 0:
                pos.append(nums[i])
            else:
                neg.append(nums[i])

        i =0
        j =0 
        k =0 
        while k<n:
            if k%2 ==0:
                nums[k] = pos[i]
                i+=1
            else:
                nums[k] = neg[j]
                j+=1
            k+=1
        return nums

# @lc code=end

