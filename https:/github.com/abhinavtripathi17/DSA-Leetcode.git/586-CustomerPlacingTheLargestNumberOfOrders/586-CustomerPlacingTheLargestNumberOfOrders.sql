-- Last updated: 8/4/2026, 7:14:40 PM
# Write your MySQL query statement below
select customer_number from Orders
group by customer_number
order by count(*) desc
Limit 1