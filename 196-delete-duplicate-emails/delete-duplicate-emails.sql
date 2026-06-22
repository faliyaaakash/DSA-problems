# Write your MySQL query statement below
delete t1 from Person as t1 INNER JOIN Person as t2 
     on t1.email=t2.email 
     where t1.id>t2.id;