-- Last updated: 8/4/2026, 7:14:28 PM
# Write your MySQL query statement below
select class from courses 
group by class 
having count(*) >= 5