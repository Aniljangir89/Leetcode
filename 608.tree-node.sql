

select id,
 case 
    when p_id is NULL then "Root"
    when id IN ( select P_id from Tree) then "Inner";
    else "Leaf";
 end as type
from Tree;
