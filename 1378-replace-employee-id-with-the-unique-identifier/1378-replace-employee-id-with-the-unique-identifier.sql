# Write your MySQL query statement below
select 
un.unique_id as unique_id, e.name as name
from Employees e left join EmployeeUNI un on e.id = un.id