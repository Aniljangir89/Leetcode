--
-- @lc app=leetcode id=175 lang=mysql
--
-- [175] Combine Two Tables
--

-- @lc code=start
# Write your MySQL query statement below
 
select p.firstName, p.lastName,a.city, a.state 
from Person p 
left join Address a 
on p.personId = a.personId;

-- @lc code=end

