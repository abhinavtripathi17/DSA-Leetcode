-- Last updated: 8/4/2026, 12:43:55 PM
select em.unique_id, e.name from Employees as e
left join employeeuni as em 
on e.id = em.id 
