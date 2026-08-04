-- Last updated: 8/4/2026, 7:14:48 PM
select e.name , b.bonus from employee as e
left join bonus as b
on e.empid = b.empid
where b.bonus < 1000 or bonus is null