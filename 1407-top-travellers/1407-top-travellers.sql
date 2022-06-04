# Write your MySQL query statement below
SELECT name, IF(distance IS NULL,0,SUM(distance)) AS travelled_distance
FROM Users u 
LEFT JOIN Rides r ON r.user_id=u.id
GROUP BY u.id
ORDER BY travelled_distance DESC, name;