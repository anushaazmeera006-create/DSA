# Write your MySQL query statement below
select project_id ,round(ifnull(sum(e.experience_years)/count(*),0),2)as average_years
from Project p
left join Employee e
on p.employee_id=e.employee_id
group by p.project_id