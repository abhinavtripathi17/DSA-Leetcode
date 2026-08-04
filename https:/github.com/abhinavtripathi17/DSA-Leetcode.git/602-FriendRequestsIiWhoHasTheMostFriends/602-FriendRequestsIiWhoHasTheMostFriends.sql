-- Last updated: 8/4/2026, 7:14:23 PM
select id , count(*) as num from
(select requester_id as id from RequestAccepted
union all
select accepter_id as id from RequestAccepted) temp
group by id
order by num desc
limit 1
