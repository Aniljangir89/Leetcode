--
-- @lc app=leetcode id=180 lang=mysql
--
-- [180] Consecutive Numbers
--

-- @lc code=start
# Write your MySQL query statement below


   select DISTINCT(l1.num) AS ConsecutiveNums
   from Logs l1
   join Logs l2 on l1.id = l2.id-1
   join Logs l3 on l1.id = l3.id-2
   where l1.num = l2.num AND l1.num = l3.num;
-- @lc code=end