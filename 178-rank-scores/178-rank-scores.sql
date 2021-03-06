# Write your MySQL query statement below
# SELECT score,
# (SELECT COUNT(*) FROM (SELECT DISTINCT score s FROM Scores) tmp WHERE s >= score) `Rank` 
# FROM Scores 
# ORDER BY score DESC;

SELECT score, DENSE_RANK() OVER (ORDER BY score DESC) AS `rank` FROM Scores;