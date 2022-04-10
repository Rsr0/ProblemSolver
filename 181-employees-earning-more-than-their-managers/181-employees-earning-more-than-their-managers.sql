# Write your MySQL query statement below
SELECT a.name AS Employee FROM Employee a
JOIN Employee b ON a.managerId=b.id
where a.salary > b.salary;