-- Last updated: 8/4/2026, 12:38:56 PM
# Write your MySQL query statement below
select teacher_id , count(distinct subject_id) as cnt from teacher
group by teacher_id;