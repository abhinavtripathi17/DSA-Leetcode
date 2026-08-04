-- Last updated: 8/4/2026, 7:14:20 PM
# Write your MySQL query statement below
select id , movie , description , rating from Cinema 
where id % 2 = 1 and description != 'boring'
order by rating desc 