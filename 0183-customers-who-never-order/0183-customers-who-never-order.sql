/* Write your T-SQL query statement below */
select c.name as Customers
from    Customers c
where not exists (SELECT 1
FROM  Orders ord
where c.id = ord.customerId)
