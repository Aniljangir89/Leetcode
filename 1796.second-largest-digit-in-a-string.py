#
# @lc app=leetcode id=1796 lang=python
#
# [1796] Second Largest Digit in a String
#

class Solution(object):
    def secondHighest(self, s):
        first = -1
        second = -1

        for x in s:
            if '0' <= x <= '9':  
                ele = ord(x) - ord('0')

                if ele > first:
                    second = first
                    first = ele
                elif ele > second and ele != first:
                    second = ele

        return second


# @lc code=end

