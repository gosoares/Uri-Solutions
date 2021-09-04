SELECT a.name, b.name
FROM products as a, providers as b
WHERE a.id_providers = b.id
    AND id_categories = 6