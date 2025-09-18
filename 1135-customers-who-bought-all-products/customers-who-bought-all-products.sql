# Write your MySQL query statement below

WITH cte AS
(SELECT customer_id,COUNT(DISTINCT customer_id,product_key) as county
FROM Customer
GROUP BY customer_id)
SELECT customer_id
FROM cte 
WHERE county = (SELECT COUNT(*) FROM Product);