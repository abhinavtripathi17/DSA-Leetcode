-- Last updated: 8/4/2026, 7:19:44 PM
# Write your MySQL query statement below
select e.name as Employee from Employee e 
join Employee m on
 m.id = e.managerId
where e.salary > m.salary