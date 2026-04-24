#
# @lc app=leetcode id=657 lang=python
#
# [657] Robot Return to Origin
#

# @lc code=start
class Solution(object):
    def judgeCircle(self, moves):
       lcount =0 
       ucount = 0
       for ch in moves:
           if(ch == 'U'):
               ucount+=1
           elif(ch == 'D'):
               ucount-=1
           elif(ch == 'L'):
               lcount+=1
           else:
               lcount-=1
       if(lcount==0 and ucount==0):
           return True
       return False
        
# @lc code=end

