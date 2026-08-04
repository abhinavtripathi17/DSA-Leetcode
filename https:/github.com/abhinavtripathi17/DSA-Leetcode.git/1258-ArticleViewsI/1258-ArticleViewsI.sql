-- Last updated: 8/4/2026, 7:08:59 PM
select distinct author_id as id from views
where author_id = viewer_id
order by  author_id asc