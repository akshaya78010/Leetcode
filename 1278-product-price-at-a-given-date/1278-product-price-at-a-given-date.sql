SELECT DISTINCT p.product_id,
       COALESCE((
           SELECT p2.new_price
           FROM Products p2
           WHERE p2.product_id = p.product_id
             AND p2.change_date <= DATE '2019-08-16'
             AND ROWNUM = 1
             AND p2.change_date = (
                 SELECT MAX(p3.change_date)
                 FROM Products p3
                 WHERE p3.product_id = p.product_id
                   AND p3.change_date <= DATE '2019-08-16'
             )
       ), 10) AS price
FROM Products p
ORDER BY p.product_id;
