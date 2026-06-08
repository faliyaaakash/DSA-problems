# Write your MySQL query statement below
SELECT * FROM Users 
WHERE REGEXP_LIKE(email,'^\\w+@[a-z]+\\.com$')=1
ORDER BY user_id;