# Write your MySQL query statement below
(select name results
from users u 
join movierating mr
on u.user_id = mr.user_id
group by 1
order by count(rating) desc , 1 asc
limit 1)
union all 
( select title results
from movies m 
join movierating mr
on m.movie_id = mr.movie_id
where month(created_at)=2 and year(created_at)=2020
group by 1
order by avg(rating) desc , 1 asc
limit 1)