# Write your MySQL query statement below
SELECT id, 
(CASE
WHEN p_id IS NULL then "Root"
WHEN id IN (SELECT p_id FROM Tree) then "Inner"
ELSE "Leaf"
END) 
AS type FROM tree
ORDER BY 1;
;