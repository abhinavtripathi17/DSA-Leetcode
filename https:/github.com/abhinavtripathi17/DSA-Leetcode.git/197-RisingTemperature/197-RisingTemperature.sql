-- Last updated: 8/4/2026, 7:19:29 PM
select w1.id from weather as w1 
left join weather as w2
on datediff(w1.recorddate , w2.recorddate) = 1
where w1.temperature > w2.temperature