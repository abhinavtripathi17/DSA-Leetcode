-- Last updated: 8/4/2026, 7:19:42 PM
select c.name as customers
from customers as c 
left join orders as o
on c.id = o.customerid
where customerid is null