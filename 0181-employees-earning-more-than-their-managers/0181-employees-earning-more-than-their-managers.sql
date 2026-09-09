/* Write your T-SQL query statement below */
-- SELECT e1.mangerId,e2.id,e1.salary as employ_s,e2.salary as mang_s,e1.name as emp_name,e2.name as man_name
select e1.name as Employee
from Employee e1
join Employee e2
on e1.managerID=e2.id
where e1.salary>e2.salary