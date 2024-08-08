# Write your MySQL query statement below
select query_name,round(sum(rating/position)/count(query_name),2) as quality,
round(100*sum(rating<3)/count(*),2) as poor_query_percentage
from queries where query_name is not null group by query_name;