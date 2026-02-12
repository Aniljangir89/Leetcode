--
-- @lc app=leetcode id=178 lang=mysql
--
-- [178] Rank Scores
--

-- @lc code=start
# Write your MySQL query statement below

 SELECT score,
       dense_rank() OVER (ORDER BY score DESC) AS `rank`
FROM Scores;


-- @lc code=end

