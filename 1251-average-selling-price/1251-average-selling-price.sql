
--  SELECT p.product_id,round(ifnull( sum(p.price*u.units)/sum(u.units),0)) as average_price
--  from Prices p  left join UnitsSold u
--  on p.product_id= p.product_id
--  and u.purchase_date between p.start_date and p.end_date
--  group by product_id
 SELECT 
    p.product_id,
    ROUND(
        IFNULL(SUM(p.price * u.units) / SUM(u.units), 0),
        2
    ) AS average_price
FROM Prices p
LEFT JOIN UnitsSold u
ON p.product_id = u.product_id
AND u.purchase_date BETWEEN p.start_date AND p.end_date
GROUP BY p.product_id;