# Write your MySQL query statement below
select EU.unique_id, E.name from EmployeeUNI EU RIGHT JOIN Employees E ON E.id=EU.id;