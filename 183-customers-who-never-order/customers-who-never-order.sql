# Write your MySQL query statement below
SELECT Customers
FROM (
    SELECT c.name AS Customers , o.id AS Id
       FROM Customers c 
       LEFT JOIN Orders o 
       ON c.id=o.customerId) AS customer
WHERE Id IS NULL;
