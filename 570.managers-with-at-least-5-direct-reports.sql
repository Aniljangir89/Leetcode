--
-- @lc app=leetcode id=570 lang=mysql
--
-- [570] Managers with at Least 5 Direct Reports
--

-- @lc code=start
# Write your MySQL query statement below
select name from
Employee
where id in (select m.managerId
from Employee m 
group by m.managerId
having count(m.managerId)>=5
);

-- @lc code=end

