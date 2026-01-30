--
-- @lc app=leetcode id=185 lang=mysql
--
-- [185] Department Top Three Salaries
--

-- @lc code=start
# Write your MySQL query statement below

select Department, Employee, Salary FROM
(
    select d.name AS Department, e.name AS Employee, e.salary AS Salary
    ,DENSE_RANK() OVER(PARTITION BY d.name order by e.salary DESC) as srank
    from  Employee e 
    join Department d on d.id = e.departmentId
)t
where srank<=3;

-- @lc code=end


