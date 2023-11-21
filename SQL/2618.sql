SELECT p.name, pr.name, c.name
FROM products as p, providers as pr, categories as c
WHERE p.id_providers = pr.id
    AND p.id_categories = c.id
    AND pr.name = 'Sansul SA'
    AND c.name = 'Imported'