SELECT c.name, SUM(p.amount)
FROM categories as c, products as p
WHERE c.id = p.id_categories
GROUP BY c.name