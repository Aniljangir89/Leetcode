--
-- @lc app=leetcode id=607 lang=mysql
--
-- [607] Sales Person
--

-- @lc code=start
# Write your MySQL query statement below

SELECT p.name
FROM SalesPerson p
WHERE p.sales_id NOT IN (
    SELECT o.sales_id
    FROM Orders o
    JOIN Company c ON o.com_id = c.com_id
    WHERE c.name = 'RED'
);



-- @lc code=end

