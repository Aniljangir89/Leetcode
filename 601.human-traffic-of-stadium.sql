--
-- @lc app=leetcode id=601 lang=mysql
--
-- [601] Human Traffic of Stadium
--

-- @lc code=start
# Write your MySQL query statement below
SELECT s.id, s.visit_date, s.people
FROM Stadium s
WHERE s.people >= 100
AND (
      EXISTS (
          SELECT 1 FROM Stadium a, Stadium b
          WHERE a.id = s.id - 1
            AND b.id = s.id - 2
            AND a.people >= 100
            AND b.people >= 100
      )
   OR EXISTS (
          SELECT 1 FROM Stadium a, Stadium b
          WHERE a.id = s.id + 1
            AND b.id = s.id + 2
            AND a.people >= 100
            AND b.people >= 100
      )
   OR EXISTS (
          SELECT 1 FROM Stadium a, Stadium b
          WHERE a.id = s.id - 1
            AND b.id = s.id + 1
            AND a.people >= 100
            AND b.people >= 100
      )
);



-- @lc code=end

