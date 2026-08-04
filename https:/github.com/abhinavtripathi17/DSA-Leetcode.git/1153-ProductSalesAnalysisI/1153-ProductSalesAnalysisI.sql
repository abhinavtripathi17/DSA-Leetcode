-- Last updated: 8/4/2026, 7:09:26 PM
select p.product_name , s.year , s.price from product as p
right join sales as s
on p.product_id = s.product_id