SELECT c.name, o.id
FROM customers as c
INNER JOIN orders as o ON c.id = o.id_customers
WHERE EXTRACT(YEAR FROM o.orders_date) = 2016
    AND EXTRACT(MONTH FROM o.orders_date) BETWEEN 1 AND 6