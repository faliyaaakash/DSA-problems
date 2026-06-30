select name from SalesPerson where sales_id NOT IN (
    select sales_id from Company as c1 inner join Orders as o1 on c1.com_id=o1.com_id where c1.name='RED'
);