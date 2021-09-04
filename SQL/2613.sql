SELECT m.id, m.name
FROM movies as m, prices as p
WHERE m.id_prices = p.id
    AND p.value < 2.00