# Write your MySQL query statement below
SELECT a.name AS Employee 
FROM Employee a, Employee b 
where  a.managerId=b.id && a.salary > b.salary;