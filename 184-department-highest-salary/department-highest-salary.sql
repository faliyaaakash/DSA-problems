# Write your MySQL query statement below
SELECT Department.name AS Department , Emp.name AS Employee , Emp.salary AS Salary
FROM
(SELECT * , MAX(salary) OVER (PARTITION BY departmentId ORDER BY DepartmentId) AS MAX_SAL
 FROM Employee) AS Emp
INNER JOIN Department ON
Department.id=Emp.departmentId
WHERE Salary=MAX_SAL;
