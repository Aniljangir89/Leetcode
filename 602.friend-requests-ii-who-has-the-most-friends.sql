 

with cte as(
  select accepter_id as id from table
  union all 
  select requester_id as id from table
)

select id,count(id) as num
from table
group by id 
order by num
limit 1;
