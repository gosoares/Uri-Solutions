SELECT c.id, c.name
FROM customers as c
WHERE NOT EXISTS (SELECT id_customers 
                    FROM locations
                    WHERE id_customers = c.id) 
ORDER BY c.id