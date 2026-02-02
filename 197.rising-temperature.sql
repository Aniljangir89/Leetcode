--
-- @lc app=leetcode id=197 lang=mysql
--
-- [197] Rising Temperature
--

-- @lc code=start
# Write your MySQL query statement below


SELECT w.id 
from Weather w 
join Weather w2 on w.temperature >w2.temperature 
where DATEDIFF(w.recordDate,w2.recordDate)=1;


-- @lc code=end

