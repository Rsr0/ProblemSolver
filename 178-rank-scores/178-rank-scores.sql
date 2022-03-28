# Write your MySQL query statement below
SELECT score,
(SELECT COUNT( DISTINCT score) FROM Scores WHERE score >= s.score) `Rank` 
FROM Scores s
ORDER BY score DESC;
