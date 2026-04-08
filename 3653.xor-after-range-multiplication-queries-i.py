#
# @lc app=leetcode id=3653 lang=python
#
# [3653] XOR After Range Multiplication Queries I
#

# @lc code=start
class Solution(object):
    def xorAfterQueries(self, nums, queries):
        n = len(nums)
        m  = len(queries)
        for i in range(m):
            idx = queries[i][0]
            while(idx<=queries[i][1]):
                nums[idx] = (nums[idx]*queries[i][3])%1000000007 
                idx+=queries[i][2]

        ans = 0
        for ele in nums:
            ans^= ele
        return ans       
# @lc code=end≠

