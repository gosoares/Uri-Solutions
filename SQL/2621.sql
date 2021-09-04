SELECT p.name 
FROM products as p
INNER JOIN providers as pr ON p.id_providers = pr.id
WHERE p.amount >= 10 AND p.amount <= 20
    AND pr.name LIKE 'P%'