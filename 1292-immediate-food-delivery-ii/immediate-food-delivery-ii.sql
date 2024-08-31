# Write your MySQL query statement below
select round(avg(temp.order_date = temp.customer_pref_delivery_date)*100,2) as immediate_percentage
from delivery as temp where (customer_id,order_date) in (select customer_id,min(order_date)from delivery group by customer_id);