SELECT p.name, pr.name, p.price
FROM products as p
INNER JOIN providers as pr ON p.id_providers = pr.id
INNER JOIN categories as c ON p.id_categories = c.id
WHERE p.price > 1000
    AND c.name = 'Super Luxury'