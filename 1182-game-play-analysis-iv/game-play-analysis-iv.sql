select ROUND(
SUM(CASE WHEN DATE_ADD(temp.mind, INTERVAL 1 DAY)=a.event_date then 1 else 0 END )
/COUNT(distinct a.player_id),2) as fraction
from
(select player_id,min(event_date) as mind from Activity
group by player_id)as temp
join activity a on
temp.player_id=a.player_id