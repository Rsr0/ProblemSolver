# Write your MySQL query statement below
SELECT firstName, lastname, city, state 
FROM Person p LEFT JOIN Address a ON p.personId=a.personId;