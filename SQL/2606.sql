SELECT p.id, p.name 
FROM products as p, categories as c
WHERE p.id_categories = c.id
    AND c.name LIKE 'super%'