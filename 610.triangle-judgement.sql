--
-- @lc app=leetcode id=610 lang=mysql
--
-- [610] Triangle Judgement
--

-- @lc code=start
# Write your MySQL query statement below

select * ,
CASE 
    WHEN x+y>z and  y+z>x and z+x>y THEN 'Yes'  
    ELSE  'No'
END as triangle
from Triangle;
-- @lc code=end

