--
-- @lc app=leetcode id=184 lang=mysql
--
-- [184] Department Highest Salary
--

-- @lc code=start
# Write your MySQL query statement below

with rank_cte as (
    select d.name AS Department, e.name AS Employee, e.salary AS Salary,
    DENSE_RANK() over (
        PARTITION BY d.name 
        order by e.salary DESC
    ) as rnk
    from Employee e 
    join Department d on e.departmentId = d.id 

)
select Department, Employee, Salary
from rank_cte
where rnk = 1;

-- @lc code=end

