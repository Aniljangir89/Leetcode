--
-- @lc app=leetcode id=181 lang=mysql
--
-- [181] Employees Earning More Than Their Managers
--

-- @lc code=start
# Write your MySQL query statement below
 
select e1.name AS Employee
from Employee e1
join Employee e2 on e2.id = e1.managerId
where e1.salary > e2.salary;

-- @lc code=end

