--
-- @lc app=leetcode id=182 lang=mysql
--
-- [182] Duplicate Emails
--

-- @lc code=start
# Write your MySQL query statement below
 select distinct(p1.email) AS Email 
 from Person p1
 where 1<(select count(p2.id) from Person p2
 where p2.email = p1.email)

-- @lc code=end

