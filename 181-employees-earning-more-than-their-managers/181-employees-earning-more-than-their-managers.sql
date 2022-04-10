# Write your MySQL query statement below
SELECT name AS Employee FROM Employee e
where salary > (
SELECT salary FROM Employee where id=e.managerId);