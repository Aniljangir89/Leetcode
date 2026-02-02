--
-- @lc app=leetcode id=619 lang=mysql
--
-- [619] Biggest Single Number
--

-- @lc code=start
# Write your MySQL query statement below

SELECT * 
from MyNumber
group by num 
having count(num) = 1
order by num DESC
limit 1 

-- @lc code=end

