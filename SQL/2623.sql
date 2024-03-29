SELECT p.name, c.name
FROM products AS p
INNER JOIN categories AS c ON p.id_categories = c.id
WHERE p.amount > 100 
    AND c.id IN (1, 2, 3, 6, 9)
ORDER BY c.id