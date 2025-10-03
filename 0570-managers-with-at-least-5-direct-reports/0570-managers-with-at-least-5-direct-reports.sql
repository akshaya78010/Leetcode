# Write your MySQL query statement below

with cte as
(
select managerId,count(managerId) as county
from Employee
Group By managerId)
SELECT e.name
from cte
JOIN Employee e
ON e.id = cte.managerId
WHERE county >= 5;
