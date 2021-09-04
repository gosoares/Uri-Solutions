SELECT c.name, r.rentals_date
FROM customers as c
    INNER JOIN rentals as r ON r.id_customers = c.id
WHERE extract(month from r.rentals_date) = 9
    AND extract(year from r.rentals_date) = 2016